#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height of Pyramid? "); //allows user to input height of pyramid between 1-8
    while (height > 8 || height < 1)
    {
        height = get_int("Height of Pyramid? "); //if user input is too small or big, it will ask again
    }
    int n = 0;
    int z = 1;
    char mario = '#';
    for (int i = 1; i <= height; i++)
    {
        for (int j = 2; j <= height - n; j++)
        {
            printf(" "); //adds space for left side pyramid before startin characters
        }
        for (int k = 1; k <= n && k < height; k++)
        {
            printf("#"); //adds the correct amount of blocks for each level of the  left sidepyramid
        }
        int p = 1;
        for (int m = z; m > 0; m--)
        {
            printf("#");
            for (int s = p; s > 0; s--)
            {
                printf("  "); // adds double space between left and right pyramid
            }
            p--; // d
        }
        printf("%c\n", mario); //adds one char & starts the next level or column of pyramid
        n++;
        z++;
    }
}
