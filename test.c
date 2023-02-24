#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number0 = get_long("Number:");
    long number = number0;


    int cifer = 1;                 //zjisti počet cifer
    do
    {
        number = number/10;
        cifer = cifer + 1;
    }
    while (number >= 10);
    printf("počet cifer: %i\n", cifer);





    printf("number0 je %li\n", number0);

    if (cifer == 6)
    {
        number0 = number0/100000;
        printf("number0 je %li\n", number0);
        if (number0 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("MASTERCARD\n");
        }
    }



}
