#include <stdio.h>

int main()
{
    int c = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int k = 1; k <= (i - 1); k++)
        {
            printf(" ");
        }
        for (int j = c; j >= 1; j--)
        {
            if (j % 2 == 0)
                printf("*");
            else
                printf("%d", 6 - i);
        }
        printf("\n");
        c++;
    }

    return 0;
}