#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 6)
    {
        printf("Key must contain 6 characters.\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        argv[1][i] = tolower(argv[1][i]);
    }

    bool check = true;
    int count = 0;
    for (int i = 0; i < strlen(argv[1]); i++)
    {
          check = isalpha(argv[1][i]);
          if (check == false)
          {
            printf("key must contain only ABC etc.\n");
            return 1;
          }
          for (int j = 0; j < strlen(argv[1]); j++)
          {
            if (argv[1][i] == argv[1][j])
            {
                count = count + 1;
            }
            if (count > strlen(argv[1]))
            {
                printf("key must not contain repeated characters.\n");
                return 1;
            }
          }
      }
    string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    array plaintext;
    string ciphertext;
    plaintext = get_string("plaintext:  ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (plaintext[0][i] == ABC[0][j])
            {
                ciphertext[0][i] = argv[0][j];
            }
        }
    }
}