#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    bool check = true;

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
    else if (check == true)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            check = isalpha(argv[1][i]);
            if (check == false)
            {
                printf("key must contain only ABC etc.");
                return 1;
            }
        }
    }

    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        argv[1][i] = tolower(argv[1][i]);
        printf("%c", argv[1][i]);
    }
    printf("\n");
}