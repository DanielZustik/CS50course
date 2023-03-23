#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{

    FILE *file = fopen(argv[1], "r");

    BYTE buffer[512];

    for (int j = 0; j < 10; j++) {
        fread(&buffer, 512, 1, file);

        for (int i = 0; i < 512; i++)
            printf("%x ", buffer[i]);
    }
}