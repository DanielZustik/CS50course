// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int M = 26 * 26 * 45;//ABC first letter, ABC second letter, lenght

// Hash table
node *table[M];

// Returns true if word is in  dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word) // treba prvnich 10 pismen brat, cim vice, tim rychlejsi search
{
    // TODO: Improve this hash function
        unsigned int hash_value = (strlen(word) * 26 * 26 + (toupper(word[0]) - 'A') * 26 + (toupper(word[1]) - 'A'));
        return hash_value;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary) // protoze jde o konsta DB, hlavni je search, big array nb aray of aray by bylo nej, potom i trie taky
{
    // TODO
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        fclose(file);
        return false;
    }

    char word[LENGTH + 1]; //buffer

    while (fscanf(file, "%s", word) != EOF) {

        node *node = malloc(sizeof(node));
        if (node == NULL)
            return false;

        strcpy(node->word, word);

        unsigned int index = hash(word);

        node->next = table[index];
        table[index] = node;

    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
