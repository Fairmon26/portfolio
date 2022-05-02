#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int spaces;
    int hash;

do
{
    height = get_int("Height: ");
}
while (height < 1 || height > 8);

for (int i = 0; i < height; i++)
{
    //For the loop to print out the spaces
    for (spaces = (height - i); spaces >= 2; spaces--)
    {
        printf(" ");
    }
    //
}
}