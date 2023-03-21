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
            image[i][j].rgbtBlue = (round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue) > 255) ?
                 255 : round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);

            image[i][j].rgbtGreen = (round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue) > 255) ?
                255 : round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);

            image[i][j].rgbtRed = (round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue) > 255) ?
            255 : round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);

          sepiaRed = .393 * originalRed + .769 * originalGreen + .189 * originalBlue
  sepiaGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue
  sepiaBlue = .272 * originalRed + .534 * originalGreen + .131 * originalBlue

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
    return;
}
