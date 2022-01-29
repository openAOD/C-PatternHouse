#include <stdio.h>

int main()
{

    int height = 5;
    int width = (2 * height) - 1;
    int n = width / 2, i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j <= width; j++)
        {
            if (j == n || j == (width - n) || (i == height / 2 && j > n && j < (width - n)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        n--;
    }

    return 0;
}