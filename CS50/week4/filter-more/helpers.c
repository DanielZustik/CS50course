#include "helpers.h"
#include <math.h>
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
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

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    int Gx[3][3] = {
    {-1, 0, 1},
    {-2, 0, 2},
    {-1, 0, 1}
    };

    int Gy[3][3] = {
    {-1, -2, -1},
    {0,  0,   0},
    {1,  2,   1}
    };

    RGBTRIPLE copy[height][width];

    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            copy[i][j] = image[i][j];

    int pixelBx;
    int pixelGx;
    int pixelRx;

    int pixelBy;
    int pixelGy;
    int pixelRy;

    printf("Blue: %i\n", image[100][100].rgbtBlue);
    printf("Green: %i\n", image[100][100].rgbtGreen);

    for (int i = 1; i < height - 1; i++)
        for (int j = 1; j < width - 1; j++) {
            pixelBx =
              copy[i - 1][j - 1].rgbtBlue * -1
            + copy[i - 1][j].rgbtBlue * 0
            + copy[i - 1][j + 1].rgbtBlue * 1

            + copy[i][j - 1].rgbtBlue * -2
            + copy[i][j].rgbtBlue * 0
            + copy[i][j + 1].rgbtBlue * 2

            + copy[i + 1][j - 1].rgbtBlue * -1
            + copy[i + 1][j].rgbtBlue * 0
            + copy[i + 1][j + 1].rgbtBlue * 1;



            pixelGx =
              copy[i - 1][j - 1].rgbtGreen * -1
            + copy[i - 1][j].rgbtGreen * 0
            + copy[i - 1][j + 1].rgbtGreen * 1

            + copy[i][j - 1].rgbtGreen * -2
            + copy[i][j].rgbtGreen * 0
            + copy[i][j + 1].rgbtGreen * 2

            + copy[i + 1][j - 1].rgbtGreen * -1
            + copy[i + 1][j].rgbtGreen * 0
            + copy[i + 1][j + 1].rgbtGreen * 1;



            pixelRx =
              copy[i - 1][j - 1].rgbtRed * -1
            + copy[i - 1][j].rgbtRed * 0
            + copy[i - 1][j + 1].rgbtRed * 1

            + copy[i][j - 1].rgbtRed * -2
            + copy[i][j].rgbtRed * 0
            + copy[i][j + 1].rgbtRed * 2

            + copy[i + 1][j - 1].rgbtRed * -1
            + copy[i + 1][j].rgbtRed * 0
            + copy[i + 1][j + 1].rgbtRed * 1;


///////////////////////////////////////////////////////
            pixelBy =
              copy[i - 1][j - 1].rgbtBlue * -1
            + copy[i - 1][j].rgbtBlue * -2
            + copy[i - 1][j + 1].rgbtBlue * -1

            + copy[i][j - 1].rgbtBlue * 0
            + copy[i][j].rgbtBlue * 0
            + copy[i][j + 1].rgbtBlue * 0

            + copy[i + 1][j - 1].rgbtBlue * 1
            + copy[i + 1][j].rgbtBlue * 2
            + copy[i + 1][j + 1].rgbtBlue * 1;

            image[i][j].rgbtBlue = sqrt(pixelBx * pixelBx + pixelBy * pixelBy) > 255 ? 255 : sqrt(pixelBx * pixelBx + pixelBy * pixelBy);

            pixelGy =
              copy[i - 1][j - 1].rgbtGreen * -1
            + copy[i - 1][j].rgbtGreen * -2
            + copy[i - 1][j + 1].rgbtGreen * -1

            + copy[i][j - 1].rgbtGreen * 0
            + copy[i][j].rgbtGreen * 0
            + copy[i][j + 1].rgbtGreen * 0

            + copy[i + 1][j - 1].rgbtGreen * 1
            + copy[i + 1][j].rgbtGreen * 2
            + copy[i + 1][j + 1].rgbtGreen * 1;

            image[i][j].rgbtGreen = sqrt(pixelGx * pixelGx + pixelGy * pixelGy) > 255 ? 255 : sqrt(pixelGx * pixelGx + pixelGy * pixelGy);

            pixelRy =
              copy[i - 1][j - 1].rgbtRed * -1
            + copy[i - 1][j].rgbtRed * -2
            + copy[i - 1][j + 1].rgbtRed * -1

            + copy[i][j - 1].rgbtRed * 0
            + copy[i][j].rgbtRed * 0
            + copy[i][j + 1].rgbtRed * 0

            + copy[i + 1][j - 1].rgbtRed * 1
            + copy[i + 1][j].rgbtRed * 2
            + copy[i + 1][j + 1].rgbtRed * 1;

            image[i][j].rgbtRed = sqrt(pixelRx * pixelRx + pixelRy * pixelRy) > 255 ? 255 : sqrt(pixelRx * pixelRx + pixelRy * pixelRy);
        };
    printf("Blue: %i\n", image[100][100].rgbtBlue);
    printf("Green: %i\n", image[100][100].rgbtGreen);
    //finalni vzorec pro hodnotu pixeu rgb

    return;
}
