#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int c = 122;
    int r = 50;
    int a = c;
    do
    {
        a = ((a + r) % 122) + 95;
    }
    while (a <= 122);
    printf("%i\n", a);
}