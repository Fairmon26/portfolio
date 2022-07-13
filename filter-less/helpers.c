#include "helpers.h"
#include <math.h>
#include <cs50.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            float Red = image[i][j].rgbtRed;
            float Blue = image[i][j].rgbtBlue;
            float Green = image[i][j].rgbtGreen;

            int average = round((Red + Blue + Green) / 3);
            image[i][j].rgbtRed = image[i][j].rgbtBlue = image[i][j].rgbtGreen = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            float originalRed = image[i][j].rgbtred;
            float originalBlue = image[i][j].rgbtBlue;
            float originalGreen = image[i][j].rgbtGreen;

            int sepiaRed = round(0.393 * originalRed + 0.769 * originalBlue + 0.189 * originalGreen);
            int sepiaBlue = round(0.349 * originalRed + 0.686 * originalBlue + 0.168 * originalGreen);
            int sepiaGreen = round(0.272 * originalRed + 0.534 * originalBlue + 0.131 * originalGreen);

            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtGreen = sepiaGreen;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width / 2; j++)
        {
            swap(&image[i][j], &image[i][width - 1 - i]);
        }
    }
}

bool is_valid_pixel(int i, int j, int height, int width)
{
    return i >= 0 && i < height && j >= 0 && j < width;
}

RGBTRIPLE get_blurred_pixel(int i, int j, int height, int width, RGBTRIPLE image[height][width])
{
    int redValue, blueValue, greenValue; redValue = blueValue = greenValue = 0;
    int numOfValidPixels = 0;
    for(int di = -1; di <= 1; di++)
    {
        for(int dj = -1; dj <= 1; dj++)
        {
            int new_i = i + di;
            int new_j = j + dj;
            if (is_valid_pixel(new_i, new_j, height, width))
            {
                numOfValidPixels++;
                redValue += image[new_i][new_j].rgbtRed;
                blueValue += image[new_i][new_j].rgbtBlue;
                greenValue += image[new_i][new_j].rgbtGreen;
            }
        }
    }
    RGBTRIPLE blurred_pixel;
    blurred_pixel.rgbtRed = round((float) redValue / numOfValidPixels);
    blurred_pixel.rgbtGreen = round((float) greenValue / numOfValidPixels);
    blurred_pixel.rgbtBlue = round((float) blueValue / numOfValidPixels);
    return blurred_pixel;
}
// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE new_image[height][width];
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            new_image[i][j] = get_blurred_pixel(i, j, height, width, image);
        }
    }

    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            image[i][j] = new_image[i][j];

}
