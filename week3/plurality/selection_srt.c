#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    int pocet = 5;
    int nejmensi = 0;
    int neco[] = {1, 3, 4, 7, 0};
    int pomocna;

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

        pomocna = neco[j];
        neco[j] = neco[nejmensi]; //přepis nejmensi na zacatek resp. doleva
        neco[nejmensi] = pomocna; //zápis hodnoty zleva do pozice doprava na místo nejmenší
    }

    printf("nejmensi: pozice %i + 1, hodnota %i\n", nejmensi, neco[nejmensi]);
    printf("pozice 0.: %i, pozice 1.: %i, pozice 2.: %i, pozice 3.: %i, pozice 4.: %i\n", neco[0], neco[1], neco[2], neco[3], neco[4]);
}
