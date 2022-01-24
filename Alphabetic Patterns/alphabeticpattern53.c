#include <stdio.h>

int main()
{
    int max = 4;

    for (int i = 1; i <= max; i++)
    {
        int k = i;
        for (int l = 1; l <= max - i; l++)
            printf("  ");
        for (int j = 1; j <= i; j++)
        {
            char a = 65 + k + (j - i) - 1;
            printf("%c ", a);
        }

        printf("\n");
    }

    for (int i = max - 1; i >= 1; i--)
    {
        int k = i;
        for (int l = 1; l <= max - i; l++)
            printf("  ");
        for (int j = 1; j <= i; j++)
        {
            char a = 65 + k + (j - i) - 1;
            printf("%c ", a);
        }

        printf("\n");
    }

    return 0;
}