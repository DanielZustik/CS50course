#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{

    FILE *file = fopen(argv[1], "r");

    BYTE buffer[512];

    int file_count;

    for(int i = 0; i < konec souboru; i++) {
        fread(&buffer, 512, 1, file);
        for(int j = 0; j < 512; j++)
            if (buffer[j] == 255 && buffer[j + 1] == 216 && buffer[j + 2] == 255) {
                file_count +=;
                FILE *newfile = fopen(file_count, "w");
            }
            //open/close file
            //write
    }

}