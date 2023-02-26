#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Velikost pole:")
    int pole[n];
    //pole[0] = 1;
    //pole[1] = 2;
    //pole[2] = 4;
    pole[0] = 1;
    for(int i = 1, i <=n, i++)
    {
        pole[i] = pole[i-1] * 2;
    }
}