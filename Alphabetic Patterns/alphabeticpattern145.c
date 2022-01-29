
#include <stdio.h>

int main()
{
    int height = 5;

    for (int i = 0; i < height; i++)
    {

        printf("* ");

        for (int j = 0; j < height - 1; j++)
        {

            if ((i == 0) || (i == height / 2 && j <= (height / 2) + 1))
                printf("* ");
            else
                continue;
        }

        printf("\n");
    }
    return 0;
}