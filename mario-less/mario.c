#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i=1;
    int n=8;

    do
    {
        printf("Height:");
        n=GetInt();
    } while (n<1 || n > 8);

    for (i=1; i<n; i++)
    {
        printf(" ");
        for (int x=0; x<i+2; x++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}