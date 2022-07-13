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

            float sepiaRed = round(.393 * pixel.rgbtRed + .769 * pixel.rgbtGreen + .189 * pixel.rgbtBlue);
            float sepiaGreen = round(.349 * pixel.rgbtRed + .686 * pixel.rgbtGreen + .168 * pixel.rgbtBlue);
            float sepiaBlue = round(.272 * pixel.rgbtRed + .534 * pixel.rgbtGreen + .131 * pixel.rgbtBlue);
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    for(int i = 0; i < height; i++)
    {
        int curPos = 0;
        for(int j = width - 1; j >= 0; j--, curPos++)
        {
            temp[i][curPos] = image[i][j];
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

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

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
