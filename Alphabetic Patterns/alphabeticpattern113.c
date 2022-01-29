#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            char c = (char)(i + 65);
            printf("%c   ", c);
        }
        printf("\n");
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = n; j > i; j--)
        {
            printf("  ");
        }
        for (int k = i; k > 0; k--)
        {
            char c = (char)(i + 64);
            printf("%c   ", c);
        }
        printf("\n");
    }

    return 0;
}
