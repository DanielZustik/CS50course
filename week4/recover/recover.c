#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{

    FILE *file = fopen(argv[1], "r");

    BYTE buffer[512];

    int file_count = 0;
    bool file_open = false;
    char filename[64];
    FILE *newfile;

    for(int i = 0; i < 100; i++) { // konec souboru
        fread(&buffer, 512, 1, file);

        for(int j = 0; j < 512; j++)
            if (buffer[j] == 255 && buffer[j + 1] == 216 && buffer[j + 2] == 255) { //chzbi posledni 4 rozeznavaci znak jpegu
                if (file_open)
                    fclose(newfile);

                file_count ++; // po5adnik p5i4teni dalisoh otevrenoho filu

                snprintf(filename, sizeof(filename), "%03d.jpeg", file_count);
                newfile = fopen(filename, "w");

                file_open = true;
            }

            if (file_open)
                fwrite(&buffer, 512, 1, newfile);
            //open/close file
            //write
    }

}