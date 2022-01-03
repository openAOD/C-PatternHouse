#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (i - 1); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (6 - i); j++)
        {
            printf("%c", i + 64);
        }
        printf("\n");
    }

    return 0;
}