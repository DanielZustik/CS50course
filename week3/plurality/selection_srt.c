#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    int pocet = 5;
    int nejmensi = 0;
    int neco[] = {5, 3, 4, 8, 0};
    int pomocna = 0;

    for (int j = 0; j < pocet - 1; j++)
    {
         //zresetování nejmensi z posledni nalezene nejmensi na nvou possibly nejmensi zacatek loopu
        for (int i = j; i < pocet - 1; i++) //posun +1
        {
            if (neco[j] < neco[i + 1]) //aktivování a srovnání, i jako pomocna nejprve je nula, nicméně při dalším průchodu vnější smyčkou bude 1 atd.
            {
                // nejmensi = nejmensi; //zaznamenání
            }
            else
            {
                j = i + 1; //zaznamenání
            }
        }
        nejmensi = nejmensi + 1;
        pomocna = neco[nejmensi];
        neco[nejmensi] = neco[j]; //přepis nejmensi na zacatek resp. doleva
        neco[j] = pomocna; //zápis hodnoty zleva do pozice doprava na místo nejmenší
        //pomocna = j + 1;
    }
    printf("pozice 0.: %i\npozice 1.: %i\npozice 2.: %i\npozice 3.: %i\npozice 4.: %i\n", neco[0], neco[1], neco[2], neco[3], neco[4]);
}
