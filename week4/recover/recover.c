#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *file = fopen(argv[1], "r");

    fread(buffer, 512, 1, file);


}