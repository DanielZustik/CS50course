#include <cs50.h>
#include <stdio.h>
#include <string.h>

int rek(int n);

int main (void)
{
    int i = get_int("zadejte číslo, jehož faktoriál se má vypočíst: ");
    printf("faktoriál se rovná: %i", rek(i));
}

int rek(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * rek(n - 1);
    }
}

int main(int argc, string argv[])
{
    if (argc != 2)
        printf..

    int *file = fopen(argv[1], r);
    if (file == NULL)
        printf
        return;

    fread(arra[], 1, 3, file)
}