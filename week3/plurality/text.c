#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    int nejmensi = 0;
    int neco[] = {1, 3, 4, 7}
    for (int i = 0; i < pocet - 1; i++) //posun +1
    {
        if (neco[nejmensi] < neco[i + 1]) //aktivování a srovnání
        {
            nejmensi = neco[nejmensi]; //zaznamenání
        }
        else
        {
            nejmensi = neco[i + 1]; //zaznamenání
        }
    }
    printf("nejmensi: pozice %i, hodnota %i", nejmensi, neco[nejmensi]);
}
