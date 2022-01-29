
#include <stdio.h>

int main()
{
   int i, j, height = 5;
    for (i = 0; i < height; i++)
    {
        printf("* ");
        for (j = 0; j < 4; j++)
        {
            if ((i == 0 || i == height - 1) || (i == height / 2 ))
                printf("* ");
            else
                continue;
        }
       printf("\n");
    }

    return 0;
}