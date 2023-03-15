#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int prvky[10];

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


    for (int j = 0; j < NUM_CITIES; j++)
    {
        for (int i = j; i < NUM_CITIES; i++)
        {
            if (temps[i].temp > max_temp)
            {
                max_i = i;
                max_temp = temps[i].temp;
            }
        }
        max_temp = temps[j + 1].temp; //zresetování max temp na hodnotu dalšího prvku v pořadí ze začátku

        hlp[0] = temps[j]; //uložení do pomocné proměnné
        temps[j] = temps[max_i];
        temps[max_i] = hlp[0];
    }

}