#include <cs50.h>
#include <stdio.h>

int const N = 10;

int main(void)
{
    int prvky[N];


    prvky[0] = 9;
    prvky[1] = 11;
    prvky[2] = 21;
    prvky[3] = 13;
    prvky[4] = 5;
    prvky[5] = 0;
    prvky[6] = 8;
    prvky[7] = 6;
    prvky[8] = 12;
    prvky[9] = 4;

    int max = prvky[0];
    int max_i;
    int hlp;


    for (int j = 0; j < N; j++)
    {
        for (int i = j; i < N; i++)
        {
            if (prvky[i] = max)
            {
                max_i = i;
                max = prvky[i];
            }
        }
        max = prvky[j + 1]; //zresetování max temp na hodnotu dalšího prvku v pořadí ze začátku
        max_i = j + 1; //zresetování max temp na hodnotu dalšího prvku v pořadí ze začátku, musí se také udělat, jinak zůstane stará pozice a nepřeuloží se, pokud se nenajde v poli už žádný větší

        hlp = prvky[j]; //uložení do pomocné proměnné
        prvky[j] = prvky[max_i];
        prvky[max_i] = hlp;
    }
    for (int i = 0; i < N; i++)
        printf("prvek %i: %i\n", i, prvky[i]);
}