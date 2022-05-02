#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int row;
    int trail;
    int span;
    do
    {
        height = get_int("Enter height here: ");
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (span = 0; span < height - row - 1; span++)
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