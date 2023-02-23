#include <cs50.h>
#include <stdio.h>

int main(void)
{

    long test = get_long ("Number:");
    test = test /10 %10;
    printf("%li\n", test);

}