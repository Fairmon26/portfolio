#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i=0;
    int n=0;

    do
    {
        printf("Height:");
        n=GetInt();
    } while (n<1 || n > 8);
}