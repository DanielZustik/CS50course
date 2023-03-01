#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
    }
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
    }
    for (i = 0; i < strlen(argv[1]); i++)
    {
        argv[1][i] = tolower(argv[i]);
        printf("%c", argv[1][i]);
    }
}