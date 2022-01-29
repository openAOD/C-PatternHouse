
#include <stdio.h>

int main()
{

    int i, j, height = 5;
    for (i = 0; i < height; i++)
    {
        printf("*");
        for (j = 0; j < (height - 1); j++)
        {
            if (i == 0 || i == height - 1)
                printf("*");
            else
                continue;
        }
        printf("\n");
    }
    return 0;
}