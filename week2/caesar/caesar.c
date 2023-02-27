#include <cs50.h>
#include <stdio.h>

bool only_digits(string s);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Ok\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("%bl\n", only_digits(argv[1]));
}

bool only_digits(string s) // true pokud obsahuje zadané pouze číslice od 0 do 9, false jinak
{
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] < 48 || s[i] > 57)
        {
            return false;
        }
    }
    return true;
}


