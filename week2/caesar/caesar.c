#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int r);

int main(int argc, string argv[])
{
    if (argc == 2 && only_digits(argv[1]) == true)
    {
        printf("Ok\n");
        int k;
        k = atoi((argv[1]));
        string plaintext = get_string ("plaintext: ");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("%c", rotate('a', 50));
}

bool only_digits(string s) // true pokud obsahuje zadané pouze číslice od 0 do 9, false jinak
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] < 48 || s[i] > 57)
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int r)
{
    int x;
    x = r % 25 + c;
    if (x > 122)
    {
        x = x - 122 + 97;
        printf("%i\n", x);
        return x;
    }
    else
    {
        printf("%i\n", x);
        return x;
    }
}

