#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    int pocet = 5;
    int nejmensi = 0;
    int neco[] = {1, 3, 4, 7, 0};

    for (int j = 0; j < pocet - 1; j++)
    {
        for (int i = 0; i < pocet - 1; i++) //posun +1
        {
            if (neco[nejmensi] < neco[i + 1]) //aktivování a srovnání
            {
                // nejmensi = nejmensi; //zaznamenání
            }
            else
            {
                nejmensi = i + 1; //zaznamenání
            }
        }

        pomocna = neco[]
        neco[j] = neco[nejmensi]
    }

    printf("nejmensi: pozice %i + 1, hodnota %i\n", nejmensi, neco[nejmensi]);
}
