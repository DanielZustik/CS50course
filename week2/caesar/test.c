#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int c = 122;
    int r = 50;
    do
    {
        c = ((c + r) % 122);
    }
    while (c >= 122);
    c = c + 95;
    printf("%c\n", c);
}