#include <cs50.h>
#include <stdio.h>

int const N = 10;

int main(void)
{
    int prvky[N];


    prvky[0] = 9;
    prvky[1] = 10;
    prvky[2] = 21;
    prvky[3] = 14;
    prvky[4] = 5;
    prvky[5] = 0;
    prvky[6] = 1;
    prvky[7] = 6;
    prvky[8] = 10;
    prvky[9] = 4;


    int swap_c = -1;
    int hlp = 0;

    while (swap_c != 0)
    {
        swap_c = 0;
        for (int i = 0; i < N - 1; i++)
        {
            if (prvky[i] <= prvky[i + 1])
            {
            }
            else
            {
                hlp = prvky[i];
                prvky[i] = prvky[i + 1];
                prvky[i + 1] = hlp;
                swap_c ++;
            }
        }
    }
    for (int i = 0; i < N; i++)
        printf("prvek %i: %i\n", i, prvky[i]);
}