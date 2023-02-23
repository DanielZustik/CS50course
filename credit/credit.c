#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //uložení čísla
    //dělení deseti a modulo 10 a uložení do proměnné
    //"testování, zda zbývající číslo je větší než 10, je li menší, tedy jednomístné, tak konec (už mám uloženy všechny číslice)
    long number0 = get_long("Number:");
    long number = number0;

    int mistne = 2;
    do
    {
        number = number/10;
        mistne = mistne + 1;
    }
    while (number > 10);
    printf("počet cifer: %i\n", mistne);
}