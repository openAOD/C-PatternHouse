
#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            if (j % 2 == 0)

                printf("*");
            else
                printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}