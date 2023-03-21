#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
        {
            int x = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0);
            image[i][j].rgbtBlue = x;
            image[i][j].rgbtGreen = x;
            image[i][j].rgbtRed = x;
        }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
        {
            image[i][j].rgbtBlue = (round(0.272 * image[i][j].rgbtRed + 0.534 * image[i][j].rgbtGreen + 0.131 * image[i][j].rgbtBlue) > 255) ?
                 255 : round(0.272 * image[i][j].rgbtRed + 0.534 * image[i][j].rgbtGreen + 0.131 * image[i][j].rgbtBlue);

            image[i][j].rgbtGreen = (round(0.349 * image[i][j].rgbtRed + 0.686 * image[i][j].rgbtGreen + 0.168 * image[i][j].rgbtBlue) > 255) ?
                255 : round(0.349 * image[i][j].rgbtRed + 0.686 * image[i][j].rgbtGreen + 0.168 * image[i][j].rgbtBlue);

            image[i][j].rgbtRed = (round(0.393 * image[i][j].rgbtRed + 0.769 * image[i][j].rgbtGreen + 0.189 * image[i][j].rgbtBlue) > 255) ?
            255 : round(0.393 * image[i][j].rgbtRed + 0.769 * image[i][j].rgbtGreen + 0.189 * image[i][j].rgbtBlue);
        }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

     RGBTRIPLE hlp;

     for(int i = 0; i < height; i++)
        for(int j = 0; j < width / 2; j++)
        {
            hlp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = hlp;
        }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE hlp;
    //roydleni na dvjmo tato udela to hlavni
     for(int i = 1; i < height - 1; i++)
        for(int j = 1; j < width - 1; j++)
        {
            image[i][j].rgbtBlue = (image[i - 1][j - 1].rgbtBlue + image[i + 1][j + 1].rgbtBlue + image[i][j].rgbtBlue + image[i + 1][j].rgbtBlue + image[i][j + 1].rgbtBlue + image[i - 1][j].rgbtBlue + image[i][j - 1].rgbtBlue + image[i + 1][j - 1].rgbtBlue + image[i - 1][j + 1].rgbtBlue) / 9;
            image[i][j].rgbtGreen = (image[i - 1][j - 1].rgbtGreen + image[i + 1][j + 1].rgbtGreen + image[i][j].rgbtGreen + image[i + 1][j].rgbtGreen + image[i][j + 1].rgbtGreen + image[i - 1][j].rgbtGreen + image[i][j - 1].rgbtGreen + image[i + 1][j - 1].rgbtGreen + image[i - 1][j + 1].rgbtGreen) / 9;
            image[i][j].rgbtRed = (image[i - 1][j - 1].rgbtRed + image[i + 1][j + 1].rgbtRed + image[i][j].rgbtRed + image[i + 1][j].rgbtRed + image[i][j + 1].rgbtRed + image[i - 1][j].rgbtRed + image[i][j - 1].rgbtRed + image[i + 1][j - 1].rgbtRed + image[i - 1][j + 1].rgbtRed) / 9;

        }
    //vzreseni rohu a koncu
    for(int i = 0; i < height; i++)
       for(int j = 0; j < width; j++)
       {
            image[i][j].rgbtBlue = image[i - 1][j - 1].rgbtBlue + image[i - 1][j - 1].rgbtBlue
       }
    return;
}
