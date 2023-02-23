#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //long number = get_long("Number:");
    //printf("%li\n", number);


    long test = 1234 % 10;
    printf("%li\n", test);
    long test2 = 1234 % 100;
    printf("%li\n", test2);
    long test3 = 1234 / 100 % 10;
    printf("%li\n", test3);
    //dělení modulem 10, 100 atd. dokud nedostaneme zbytek 0
}