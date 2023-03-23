#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *file = fopen(argv[1], "r");

    unsigned char buffer[512];

    fread(&buffer, 512, 1, file);

    for (int i = 0; i < 512; i++)
        printf("%i ", buffer[i]);
}