#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "wav.h"

bool check_format(WAVHEADER header);
int get_block_size(WAVHEADER header);

int main(int argc, char *argv[])
{
    // Ensure proper usage
    // TODO #1
    if (argc != 3) {
        printf("not proper usage, use:...");
        return 1;
    }

    // Open input file for reading
    // TODO #2
    FILE *infile = fopen(argv[1], "r");

    if (infile == NULL) {
        printf("could not open file");
        return 1;
    }

    // Read header
    // TODO #3
    WAVHEADER header;
    fread(&header, sizeof(WAVHEADER), 1, infile);
    long begining = ftell(infile);

    // Use check_format to ensure WAV format
    // TODO #4
    if (check_format(header) != true) {
        printf("not the right wav format");
        return 1;
        }

    // Open output file for writing
    // TODO #5
    FILE *outfile = fopen(argv[2], "w");

    if (outfile == NULL) {
        printf("could not create outfile");
        return 1;
    }

    // Write header to file
    // TODO #6
    fwrite(&header, sizeof(header), 1, outfile);


    // Use get_block_size to calculate size of block
    // TODO #7
    int block_size = get_block_size(header);


    // Write reversed audio to file
    // TODO #8

    BYTE block[block_size];

    fseek(infile, -block_size, SEEK_END);

    while (ftell(infile) != begining) {
        fread(block, block_size, 1, infile);
        fwrite(block, block_size, 1, outfile);
        fseek(infile, -2 * block_size, SEEK_CUR);
    }
    fclose(outfile);
    fclose(infile);
return 0;
}

bool check_format(WAVHEADER header)
{
    // TODO #4
    char *wave = "WAVE";

    for (int i = 0; i < 4; i++)
        if (header.format[i] == wave[i])
            return true;
        else
            return false;
    return 1;
}

int get_block_size(WAVHEADER header)
{
    // TODO #7
    int block_size;
    return block_size = header.bitsPerSample * header.numChannels / 8;
}