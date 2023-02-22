#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height:");
    }
    while (height<1 || height>8);

    //printf("Stored: %i\n",height);

    for (int i = 0; i < height; i++)
    {
        int k = height-1-i;
        for (int x = 0; x < k; x++)
        {
            printf(".");
        }
        for (int j = 0; j < i || j == i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

}