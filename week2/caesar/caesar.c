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
}

bool only_digits(string s) // true pokud obsahuje zadané pouze číslice od 0 do 9, false jinak
{
    if (s < 48 || s > 57)
    {
        return false;
    }
    else
    {
        return true;
    }
}


