#include "helpers.h"
#include <stdio.h>

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosingasd

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (image[i][j].rgbtGreen == 255 && image[i][j].rgbtRed == 255 && image[i][j].rgbtBlue == 255)
            {
                image[i][j].rgbtGreen = 55;
                image[i][j].rgbtRed = 68;
                image[i][j].rgbtBlue = 180;
            }
        }
    }
}
