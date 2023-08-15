#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Changing all black pixels to a different color

    // Iterating through all the scanlines
    for (int i = 0; i < height; i++)
    {
        // Iterating through the pixels
        for (int j = 0; j < width; j++)
        {
            if (image[i][j].rgbtBlue == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtRed == 0x00)
            {
                image[i][j].rgbtBlue = 0x16;
                image[i][j].rgbtGreen = 0x12;
                image[i][j].rgbtRed = 0x20;
            }
        }
    }
}
