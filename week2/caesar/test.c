#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int r = 60;
    int x;
    x = r % 27 + 95;
    printf("%i\n", x);
}