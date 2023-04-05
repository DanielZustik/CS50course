// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 31095;//ABC first letter, ABC second letter, lenght

// Hash table
node *table[N];

int nodes = 0;

// Returns true if word is in  dictionary, else false
bool check(const char *word)
{

    int index = hash(word);
    node *cursor = NULL;
    cursor = table[index];

    while (cursor != NULL) {
        if (strcasecmp(word, cursor->word) == 0)
            return true;
        else
            cursor = cursor->next;
    }

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
    for (int i = 0; i < N; i++)
        {
    table[i] = NULL;
    }

    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }

    char word[LENGTH + 1]; //buffer

    while (fscanf(file, "%s", word) != EOF) {

        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
            return false;
        nodes++;

        strcpy(new_node->word, word);

        new_node->next = NULL;

        unsigned int index = hash(word);

        new_node->next = table[index];
        table[index] = new_node;

    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return nodes;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    node *tmp = NULL;
    node *cursor = NULL;

    for (int i = 0; i < N; i++) {
        cursor = table[i];
        while (cursor != NULL) {
            tmp = cursor;
            cursor = cursor->next;
            free (tmp);
        }
        free(cursor);
    }

    return false;
}
