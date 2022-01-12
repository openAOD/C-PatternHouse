#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            printf(" ");
        }
        for (int j = (6 - i); j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}