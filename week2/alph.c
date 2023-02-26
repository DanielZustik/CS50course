//zeptání se na string
//ověření, zda jsou lowercase písmena stringu po sobě jdoucí v abecedném pořadí
//pokud ano, tisknout ano, pokud ne, tisknout ne
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string word = get_string("Word: ");
    // získat velikost pole strlen(string), string.h
    // entrnout každý prvek pole, který je lowercase a srovnat ho s přecházejícím, pokud všechyn splnují podmínku tisknout yes.. a nějak ignorovat uppercase písmena.. tedy checknout zda jde o upper nb lower nejprve,

    string boolean;

        for (i = 1; i < strlen(word); i++)
        {
            do
            {
                if (word[i] > word[i - 1])
                {
                    boolean = "true";
                }
                else
                {
                    boolean = "false";
                    i = strlen(word);
                }
            while (boolean = "true");
             }
    printf("No\n");
    }

}