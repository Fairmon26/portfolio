#include "helpers.h"
#include <math.h>
#include <cs50.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i - 0; i < height; i++)
    {
        for (int j - 0; j < width; j++)
        {
            RGBTRIPLE pixel = image[i][j];
            int average = round(pixel.rgbtRed + pixel.rgbtGreen + pixelrgbtBlue) / 3.0)
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
        }
    }
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RGBTRIPLE pixel = image[i][j];
            int originalRed = pixel.rgbtRed;
            int originalGreen = pixel.rgbtGreen
            int originalBlue = pixel.rgbtBlue
            image[i][j].rgbtRed =cap(round(0.393 * originalRed + 0.769 originalGreen + 0.189 * originalBlue))
            image[i][j].rgbtGreen =cap(round(0.393 * originalRed + 0.769 originalGreen + 0.189 * originalBlue))
            image[i][j].rgbtBlue =cap(round(0.393 * originalRed + 0.769 originalGreen + 0.189 * originalBlue))
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
