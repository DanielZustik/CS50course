#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
    }
    if (strlen(argv[1]) != 6)
    {
        printf("Key must contain 6 characters.\n");
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        argv[1][i] = tolower(argv[1][i]);
        printf("%c", argv[1][i]);
    }
    printf("\n");
}