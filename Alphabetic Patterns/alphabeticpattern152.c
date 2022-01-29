
#include <stdio.h>

int main()
{
    int height = 5;
    int i, j, counter = 0;
    for (i = 0; i < height; i++)
    {
        printf("*");
        for (j = 0; j <= height; j++)
        {
            if (j == height)
                printf("*");
            else if (j == counter || j == height - counter - 1)
                printf("*");
            else
                printf(" ");
        }
        if (counter == height / 2)
        {
            counter = -99999;
        }
        else
            counter++;
        printf("\n");
    }
    return 0;
}