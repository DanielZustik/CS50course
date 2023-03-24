#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("usage ./recover card.raw");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL) {
        printf("could not open file");
        return 1;
    }

    BYTE buffer[512];

    int file_count = 0;
    bool file_open = false;
    char filename[9];
    FILE *newfile;

    while (fread(buffer, 512, 1, file)) { // konec souboru
        for(int j = 0; j < 512; j++) {
            if (buffer[j] == 255 && buffer[j + 1] == 216 && buffer[j + 2] == 255 && (buffer[j + 3] & 0xf0) == 0xe0) { //chzbi posledni 4 rozeznavaci znak jpegu
                if (file_open)
                    fclose(newfile);
                    
                snprintf(filename, sizeof(filename), "%03d.jpg", file_count);
                newfile = fopen(filename, "w");

                file_open = true;
                file_count ++; // po5adnik p5i4teni dalisoh otevrenoho filu
            }
        }
        if (file_open)
            fwrite(&buffer, 512, 1, newfile);
            //open/close file
            //write
    }
    fclose(newfile);
}