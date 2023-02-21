#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n = 0;
    while (n < 9)
{
    n = get_int ("Jaká je počáteční populace?");
}


    // TODO: Prompt for end size

    int stop = 0;
    while (stop < n)
    {
         stop = get_int ("Jaká je koncová populace?");
    }


    // TODO: Calculate number of years until we reach threshold

    int y = 0;
    while (n < stop)
{
    n = n + n/3 - n/4;
    y++;

    // TODO: Print number of years
 }

 printf("Konečná populace bude dosažena za %i let\n", y);
}
