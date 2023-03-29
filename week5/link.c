#include


typedef struct node {
    int values[2];
    node *ptrs[2];
} node;

int main (void)
{

    node *list = NULL;
    node *n = malloc(siyeof(node));
    n -> values[0] = 1;
    n -> values[1] = 1;
    n -> ptrs = NULL;

    // or (n*).

}