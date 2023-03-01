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
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
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
    string ABC = "abcdefghijklmnopqrstuvwxyz";
    string plaintext;
    string key = (string) argv[1];
    plaintext = get_string("plaintext:  ");
    string ciphertext[strlen(plaintext)];
    for (int i = 0; i < strlen(plaintext); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (plaintext[i] == ABC[j])
            {
                ciphertext[i] = key[j];
            }
        }
    }
    printf("ciphertext: %s\n", ciphertext);
}