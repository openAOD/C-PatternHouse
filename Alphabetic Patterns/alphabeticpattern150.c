#include <stdio.h>

int main()
{
    int height = 5;
    int i, j, half = height / 2, dummy = half;
    for (i = 0; i < height; i++)
    {
        printf("*");
        for (j = 0; j <= half; j++)
        {
            if (j == abs(dummy))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        dummy--;
    }
    return 0;
}