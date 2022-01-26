#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j == i || n - j + 1 == i)
            {
                char c = (char)(j + 64);
                printf("%c ", c);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}