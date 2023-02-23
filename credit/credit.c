#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //long number = get_long("Number:");
    //printf("%li\n", number);

    long numero = get_long("Number: ");
    //float test = 1234 /10000; //% 10;
    long otest = numero - 1000000000000;//12 nul
    printf("%li\n",otest);
    if (otest > 1)
    {
        printf("jde o 17-ti místné číslo\n");
    }
    //printf("%f\n", test);
    //dělení modulem 10, 100 atd. dokud nedostaneme zbytek 0
}