#include "helpers.h"
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    //nacteni image
    BITMAPINFOHEADER header1;
    BITMAPFILEHEADER header2;
    RGBTRIPLE data1[1][1];

    FILE *image1 = fopen("courtyard.bmp", "r");
    fread(header1, 14, 1, image1);
    fread(header2, 40, 1, image1);
    fwrite(co, x, y, kam)
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
