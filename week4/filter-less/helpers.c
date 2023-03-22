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
    RGBTRIPLE copy[height][width];

     for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }

    //roydleni na dvjmo, tato udela to hlavni, neudela konce a rohy proto height/width - 1
     for(int i = 1; i < height - 1; i++)
        for(int j = 1; j < width - 1; j++)
        {
            image[i][j].rgbtBlue = round((copy[i - 1][j - 1].rgbtBlue + copy[i + 1][j + 1].rgbtBlue + copy[i][j].rgbtBlue + copy[i + 1][j].rgbtBlue + copy[i][j + 1].rgbtBlue + copy[i - 1][j].rgbtBlue + copy[i][j - 1].rgbtBlue + copy[i + 1][j - 1].rgbtBlue + copy[i - 1][j + 1].rgbtBlue)) / 9;
            image[i][j].rgbtGreen = round((copy[i - 1][j - 1].rgbtGreen + copy[i + 1][j + 1].rgbtGreen + copy[i][j].rgbtGreen + copy[i + 1][j].rgbtGreen + copy[i][j + 1].rgbtGreen + copy[i - 1][j].rgbtGreen + copy[i][j - 1].rgbtGreen + copy[i + 1][j - 1].rgbtGreen + copy[i - 1][j + 1].rgbtGreen)) / 9;
            image[i][j].rgbtRed = round((copy[i - 1][j - 1].rgbtRed + copy[i + 1][j + 1].rgbtRed + copy[i][j].rgbtRed + copy[i + 1][j].rgbtRed + copy[i][j + 1].rgbtRed + copy[i - 1][j].rgbtRed + copy[i][j - 1].rgbtRed + copy[i + 1][j - 1].rgbtRed + copy[i - 1][j + 1].rgbtRed)) / 9;

        }
    //vzreseni rohu
    image[0][0].rgbtBlue = round((copy[0][0].rgbtBlue + copy[0][1].rgbtBlue + copy[1][1].rgbtBlue + copy[1][0].rgbtBlue) / 4);
    image[0][0].rgbtGreen = round((copy[0][0].rgbtGreen + copy[0][1].rgbtGreen + copy[1][1].rgbtGreen + copy[1][0].rgbtGreen) / 4);
    image[0][0].rgbtRed = round((copy[0][0].rgbtRed + copy[0][1].rgbtRed + copy[1][1].rgbtRed + copy[1][0].rgbtRed) / 4);

    image[height - 1][0].rgbtBlue = round((copy[height - 1][0].rgbtBlue + copy[height - 2][0].rgbtBlue + copy[height - 2][1].rgbtBlue + copy[height - 1][1].rgbtBlue) / 4);
    image[height - 1][0].rgbtGreen = round((copy[height - 1][0].rgbtGreen + copy[height - 2][0].rgbtGreen + copy[height - 2][1].rgbtGreen + copy[height - 1][1].rgbtGreen) / 4);
    image[height - 1][0].rgbtRed = round((copy[height - 1][0].rgbtRed + copy[height - 2][0].rgbtRed + copy[height - 2][1].rgbtRed + copy[height - 1][1].rgbtRed) / 4);

    image[height - 1][width - 1].rgbtBlue = round((copy[height - 1][width - 2].rgbtBlue + copy[height - 2][width - 2].rgbtBlue + copy[height - 2][width - 1].rgbtBlue + copy[height - 1][width - 1].rgbtBlue) / 4);
    image[height - 1][width - 1].rgbtGreen = round((copy[height - 1][width - 2].rgbtGreen + copy[height - 2][width - 2].rgbtGreen + copy[height - 2][width - 1].rgbtGreen + copy[height - 1][width - 1].rgbtGreen) / 4);
    image[height - 1][width - 1].rgbtRed = round((copy[height - 1][width - 2].rgbtRed + copy[height - 2][width - 2].rgbtRed + copy[height - 2][width - 1].rgbtRed + copy[height - 1][width - 1].rgbtRed) / 4);

    image[0][width - 1].rgbtBlue = round((copy[0][width - 1].rgbtBlue + copy[1][width - 2].rgbtBlue + copy[0][width - 2].rgbtBlue + copy[1][width - 1].rgbtBlue) / 4);
    image[0][width - 1].rgbtGreen = round((copy[0][width - 1].rgbtGreen + copy[1][width - 2].rgbtGreen + copy[0][width - 2].rgbtGreen + copy[1][width - 1].rgbtGreen) / 4);
    image[0][width - 1].rgbtRed = round((copy[0][width - 1].rgbtRed + copy[1][width - 2].rgbtRed + copy[0][width - 2].rgbtRed + copy[1][width - 1].rgbtRed) / 4);

    //vzreseni koncu

        for(int i = 1; i < height - 1; i++)
        {
            image[i][0].rgbtBlue = round((copy[i + 1][1].rgbtBlue + copy[i + 1][0].rgbtBlue + copy[i][0].rgbtBlue + copy[i - 1][0].rgbtBlue + copy[i - 1][1].rgbtBlue + copy[i][1].rgbtBlue) / 6);
            image[i][0].rgbtGreen = round((copy[i + 1][1].rgbtGreen + copy[i + 1][0].rgbtGreen + copy[i][0].rgbtGreen + copy[i - 1][0].rgbtGreen + copy[i - 1][1].rgbtGreen + copy[i][1].rgbtGreen) / 6);
            image[i][0].rgbtRed = round((copy[i + 1][1].rgbtRed + copy[i + 1][0].rgbtRed + copy[i][0].rgbtRed + copy[i - 1][0].rgbtRed + copy[i - 1][1].rgbtRed + copy[i][1].rgbtRed) / 6);
        }

    return;
}
