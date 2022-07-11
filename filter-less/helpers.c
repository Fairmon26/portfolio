#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0, i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            RGBTRIPLE pixel - image[i][j];
            int average = round(pixel.rgbtBlue + pixel.rgbtRed + pixel rgbtGreen)/3.0);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
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
            RGBTRIPLE pixel = image[i][j];
            float originalRed = pixel.rgbtRed;

            sepiaRed = .393 * originalRed + .769 * oringinalGreen + .189 * originalBlue
            sepiaGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue
            sepiaBlue = .272 *
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j =0; j < width; j++)
        {
            RGBTRIPLE pixel = image[i][j];
            float origiinalRed = pixel.rgbtRed;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
