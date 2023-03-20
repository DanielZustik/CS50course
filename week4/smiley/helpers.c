#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    image[0][0].rgbtBlue = 255;
    image[0][0].rgbtGreen = 0;
    image[0][0].rgbtRed = 0;

    return;
}
