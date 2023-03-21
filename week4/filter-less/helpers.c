#include "helpers.h"
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    //nacteni image
    BITMAPINFOHEADER
    BITMAPFILEHEADER

    
    FILE *image1 = fopen("courtyard.bmp", "r");
    RGBTRIPLE data[1][1];
    fread(data, 3, 1, image1);

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
