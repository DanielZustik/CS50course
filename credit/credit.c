#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //uložení čísla
    //dělení deseti a modulo 10 a uložení do proměnné
    //"testování, zda zbývající číslo je větší než 10, je li menší, tedy jednomístné, tak konec (už mám uloženy všechny číslice)

    long number0 = get_long("Number:");
    long number = number0;
    long number2 = number0;



    int cifer = 1;                 //zjisti počet cifer
    do
    {
        number = number / 10;
        cifer = cifer + 1;
    }
    while (number >= 10);
    printf("počet cifer: %i\n", cifer);

    int asd = number2 % 10;
    int sum = asd;
    int zbytek3 = 0;
    do
    {
        number2 = number2 / 100;
        zbytek3 = number2 % 10;
        sum = sum + zbytek3 ;
    }
    while (number2 >= 10);
    printf("suma: %i\n", sum);


    if (cifer == 15)            // určí o jaký typ akrty jde
    {
        printf("AMEX\n");
    }
    else if (cifer == 13)
    {
        printf("VISA\n");
    }

    else if (cifer == 16)
    {
        number0 = number0 / 1000000000000000;
        if (number0 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("MASTERCARD\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }


    int zbytek = number0 % 10;          //vytiskne jednotlive cislice
    printf("zbytek:%i\n", zbytek);
    number2 = number0;
    for (int i = 1; i < cifer; i++)
    {
        number2 = number2 / 10;
        int zbytek2 = number2 % 10;
        printf("dalsi zbytky: %i\n", zbytek2);
    }
}