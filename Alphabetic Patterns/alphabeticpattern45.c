#include <stdio.h>

int main()
{
    int c = 9;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= c; j++)
        {
            printf("%c", 64 + j);
        }
        c = c - 2;
        printf("\n");
    }

    return 0;
}