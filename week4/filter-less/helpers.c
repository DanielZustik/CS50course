#include "helpers.h"
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    //nacteni image
    BITMAPINFOHEADER header1;
    BITMAPFILEHEADER header2;
    RGBTRIPLE data1[1][1];

    FILE *imagein = fopen("courtyard.bmp", "r");
    FILE *imageout = fopen("output.bmp", "w");

    fread(header1, 14, 1, imagein);
    fread(header2, 40, 1, imagein);
    fwrite(co, 14, 1, output.bmp)
    fwrite()

    fread(data1, 3, 1, image1);

    //read
    //write

    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
