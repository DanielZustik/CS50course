#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
    }
    if (strlen(argv[]) != 26)
    {
        printf("Key must contain 26 characters.");
    }
}