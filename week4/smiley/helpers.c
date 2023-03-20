#include "helpers.h"
#include <stdio.h>

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosingasd
    printf("%i, %i", height, width);

    for (int i = 0; i < 8; i++)
    {
        image[0][0].rgbtGreen = 255;
        image[0][0].rgbtRed = 0;
        image[0][0].rgbtBlue = 0;
    }
}
