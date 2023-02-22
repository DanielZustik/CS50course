#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //long number = get_long("Number:");
    //printf("%li\n", number);

    long test = 1234 /10000 % 10;
    printf("%li\n", test);
    //dělení modulem 10, 100 atd. dokud nedostaneme zbytek 0
}