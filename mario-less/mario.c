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
        for (int j = 0; j < i || j == i; j++)
        {
            int k = height-1;
            //for (k; k > j || k == j; k--)
            //{
            //    printf(".");
            //}
            for (int x = 0; x < 4; x++)
            while (k > j)
            {
                k--;
                printf(".");
            }
            printf("#");
        }

        printf("\n");
    }

}