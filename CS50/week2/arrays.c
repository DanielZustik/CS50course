#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Velikost pole:");
    }
    while (n < 1);
    int pole[n];
    //pole[0] = 1;
    //pole[1] = 2;
    //pole[2] = 4;
    pole[0] = 1;
    printf("Pole 0 = %i\n", pole[0]);
    for(int i = 1; i < n; i++)
    {
        pole[i] = pole[i-1] * 2;
        printf("Pole %i = %i\n", i, pole[i]);
    }
}