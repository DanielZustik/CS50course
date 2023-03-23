#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{

    FILE *file = fopen(argv[1], "r");

    BYTE buffer[512 * 10];

    fread(&buffer, 512 * 10, 1, file);

    for(int i = 0; i < 512 * 10; i++) {
        if (buffer[i] == 255 && buffer[i + 1] == 216 && buffer[i + 2] == 255)
            printf("%i", buffer[i]);
        //printf("%x", buffer[i]);
    }
}