#include <stdio.h>

int main()
{

    for (int i = 5; i >= 0; i--)
    {

        for (int j = 1; j <= (i + 1); j++)
        {
            if (j == (i + 1))
            {
                printf("%d", i);
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}