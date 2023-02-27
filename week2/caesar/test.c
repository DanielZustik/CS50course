#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int a;
    a = (122 + 40) % 122 + 95;
    printf("%i\n", a);
}