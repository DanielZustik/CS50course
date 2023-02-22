#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height:");
    }
    while (height<1 || height>8);

    //printf("Stored: %i\n",height);

    for (int i = 0; i < height; i++)
    {
        printf("#");
    }

//vytiskni jeden
//vytiskni dva
//vytiskni height
}