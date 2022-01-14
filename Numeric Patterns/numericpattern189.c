
#include <stdio.h>

int main()
{

    for (int i = 5; i >= 1; i--)
    {
        for (int k = 1; k <= (i - 1); k++)
        {
            printf(" ");
        }
        for (int j = i; j <= 5; j++)
        {
            if (i % 2 == 0)
                printf("*");
            else
                printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}