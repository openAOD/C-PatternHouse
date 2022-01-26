#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * (n - i + 1); j++)
        {
            if (i + j <= n + 1)
                printf("%c ", (64 + j));
            else
                printf("%c ", (65 + (2 * (n - i + 1) - j)));
        }
        printf("\n");
    }

    return 0;
}