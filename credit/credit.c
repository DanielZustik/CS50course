#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //uložení čísla
    //dělení deseti a modulo 10 a uložení do proměnné
    //"testování, zda zbývající číslo je větší než 10, je li menší, tedy jednomístné, tak konec (už mám uloženy všechny číslice)

    long number0 = get_long("Number:");
    long number = number0;

    int cifer = 1;                 //zjisti počet cifer
    do
    {
        number = number/10;
        cifer = cifer + 1;
    }
    while (number >= 10);
    printf("počet cifer: %i\n", cifer);

    int zbytek = number0 % 10;
    printf("zbytek:%i\n", zbytek);

    int number2 = number0;
    for (int i = 0; i <= cifer; i++)
    {
        number2 = number2 / 10;
        int zbytek2 = number2 % 10;
        printf("dalsi zbytky: %i\n", zbytek2);
    }
}