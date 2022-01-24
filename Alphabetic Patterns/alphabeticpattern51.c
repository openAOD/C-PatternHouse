
#include <stdio.h>

int main()
{
    int start = 4;
    for (int i = 1; i <= start; i++)
    {
        int k = start;
        for (int l = 1; l <= start - i; l++)
            printf("  ");
        for (int j = 1; j <= i; j++)
        {
            char a = 65 + k + (j - i) - 1;
            printf("%c ", a);
        }
        printf("\n");
    }
    for (int i = start - 1; i >= 1; i--)
    {
        int k = start;
        for (int l = 1; l <= start - i; l++)
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