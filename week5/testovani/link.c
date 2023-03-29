#include <stdlib.h>

typedef struct node {
    int values[2];
    struct node *ptrs;
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
    n = malloc(sizeof(node));
    n -> values[0] = 2;
    n -> values[1] = 2;
    n -> ptrs = NULL;

    //now pointing the new one to older one, connecting it actualy
    n -> ptrs = list;
    list = n;

    // vztvoreni var pointer ukazujici na list, resp ze zacatku an nic
    // vytvoreni pomocne var pointeru n ukazujici na misto v pameti odpovidajci new prvku, nodu.. a to s pomoci malloc
    // inicializovani hodnot v nodu skrze n
    // napointovani list promene na tuto node resp. list
    // vytvoreni noveho prvku, nodu skrye pomocnou n a malloc, incializovani hodnot
    // dulezite napointovani nove promenne na starou, tj kde ukazuje list
    // nasledne napointovani listu skrze n na novou promennou
    // repeat
}