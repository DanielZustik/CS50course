#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    int k = (int) argv[1]
    if (argc == 2 && k > 0)
    {
        printf("Ok\n");
        printf("%s\n", k);
    }
    else
    {
        printf("Off\n");
        return 1;
    }
}