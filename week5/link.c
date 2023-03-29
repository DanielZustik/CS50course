#include <stdlib.h>


typedef struct node {
    int values[2];
    node *ptrs;
} node;

int main (void)
{

    node *list = NULL;
    node *n = malloc(sizeof(node));
    n -> values[0] = 1; // or (n*).
    n -> values[1] = 1;
    n -> ptrs = NULL;
    list = n;

    //vztvoreni dalsiho prvku
    node *n = malloc(sizeof(node));
    n -> values[0] = 2;
    n -> values[1] = 2;
    n -> ptrs = NULL;

    //now pointing the new one to older one, connecting it actualy
    n -> ptrs = list;
    list = n;
}