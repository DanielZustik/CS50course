#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{

    FILE *file = fopen(argv[1], "r");

    BYTE buffer[512];

    for(int i = 0; i < 3; i++) {
        fread(&buffer, 512, 1, file);
        for(int j = 0; j < 512; j++)
            if (buffer[j] == 255 && buffer[j + 1] == 216 && buffer[j + 2] == 255)
                printf("%i", i);
            //open/close file
            //write
    }

}