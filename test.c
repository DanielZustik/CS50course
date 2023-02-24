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


    if (cifer == 16)
    {
        number = number/1000000000000;
        int zbytekVorM = number % 10;
        printf("zbytekVorM: %i\n", zbytekVorM);
        if (zbytekVorM == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("MASTERCARD\n");
        }
    }



}
