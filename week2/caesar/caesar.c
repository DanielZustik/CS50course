#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2 && argv[1] > 0)
    {
        printf("Ok\n");
        printf("%s\n", argv[1]);
    }
    else
    {
        printf("Off\n");
        return 1;
    }
}