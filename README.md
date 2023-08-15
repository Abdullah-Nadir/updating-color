
# Smiley

## Learning Goals

- Learn how to work with images
- Practice manipulating pixels
## Background

![Beach Image](https://cs50.harvard.edu/x/2023/labs/4/smiley/smiley_spec_image.png)

After learning about how images are stored on a computer. In this program, I have practiced working with a BMP file, actually the smiley face pictured here, and change all the black pixels to a different color.
   
However, the smiley face I've worked with is not just made of 0’s and 1’s, or black and white pixels, but consists of 24 bits per pixel. It uses eight bits to represent red values, eight bits for green and eight bits for blue. Since each color uses eight bits or one byte, we can use a number in the range of 0 to 255 to represent its color value. In hexadecimal, this is represented by 0x00 to 0xff. By mixing together these red, green and blue values, we can create millions of possible colors.

If you look at `bmp.h`, one of the the helper files in the distribution code, you’ll see how each `RGB triple` is represented by a `struct` like:

```c
typedef struct
{
    BYTE rgbtBlue;
    BYTE rgbtGreen;
    BYTE rgbtRed;
}
RGBTRIPLE;
```

where `BYTE` is defined as an 8-bit integer.




## Compiling

You can compile your code by simply typing `make` at the `$` prompt.

You then execute the program by typing:

```
./colorize smiley.bmp outfile.bmp
```

where `outfile.bmp` is the name of the new bmp you are creating.
## Usage/Example

Your program should behave per the examples below.

```
smiley/ $ ./colorize smiley.bmp smiley_out.bmp
```

When your program is working correctly, you should see a new file, smiley_out.bmp in your smiley directory. Open it up and see if the black pixels are now the color you’ve specified. 


