#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0, i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RGBTRIPLE pixel - image[i][j];
            int average = round(pixel.rgbtBlue + pixel.rgbtRed + pixel rgbtGreen)/3.0);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
        }
    }
    return;
}

int cap(int value)
{
    return value > 255 ? 255 : value;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            RGBTRIPLE pixel = image[i][j];
            int originalRed = pixel.rgbtRed;
            int originalGreen = pixel.rgbt.Green;
            int originalBlue = pixel.rgbtBlue;

            image[i][j] = cap(round(0.393 * pixel.rgbtRed + 0.769 * pixel.rgbtGreen + 0.189 * pixel.rgbtBlue));
            image[i][j] = cap(round(0.349 * pixel.rgbtRed + 0.686 * pixel.rgbtGreen + 0.168 * pixel.rgbtBlue));
            image[i][j] = cap(round(0.272 * pixel.rgbtRed + 0.534 * pixel.rgbtGreen + 0.131 * pixel.rgbtBlue));
        }
    }
    return;
}

void swap(RGBTRIPLE * pixel1, RGBTRIPLE * pixel2)
{
    RGBTRIPLE temp = *pixel1;
    *pixel1 = *pixel2;
    *pixel2 = temp;
}


// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; i++)
        {
            swap(&image[i][j], image[i][width - 1 - i]);
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE new_image[height][width];
    for (int i = 0; i < height; i++)
    

    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            int count = 0;
            int[] rowCoords = { row-1, row, row+1 };
            int[] colCoords = { col-1, col, col+1 };
            float totalR = totalG = totalB = 0;

            for(int r = 0; r < 3; r++)
            {
                for(int c = 0; c < 3; c++)
                {
                    int curRow = rowCoords[r];
                    int curCol = rowCoords[c];

                    if(curRow >= 0 && curRow < height && curCol >= 0 && curCol < width)
                    {
                        RGBTRIPLE pixel = image[curRow][curCol];
                        totalR
                        count++;
                    }
                }
            }
        }
    }

    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
    return;
}
