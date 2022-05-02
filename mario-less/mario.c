#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int row;
    int trail;
    int space;
    do
    {
        height = get_int("Enter height here: ");
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        for (trail = 0; trail <= row; trail++)
        {
            printf("#");
        }
        printf("\n");
    }
}