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
const unsigned int M = 676;

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
    return switch (strlen(word)) {
        case 1: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 2: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 3: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 4: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 5: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 6: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 7: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 8: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 9: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 10: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 11: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 13: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 14: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 15: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 16: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 17: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 18: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 19: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 20: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 21: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 22: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 23: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 24: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 25: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 26: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 27: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
        case 12: (toupper(word[0]) - 'A') * (toupper(word[1]) - 'A'); break;
    }
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
