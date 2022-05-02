#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do
    {
    height = get_int("Enter height here: ");
    }
    while (height < 1 || height > 8);
    }