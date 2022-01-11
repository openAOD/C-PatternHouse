#include <stdio.h>

int main()
{
    int c = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            printf(" ");
        }
        for (int j = c; j >= 1; j--)
        {
            printf("%c", 64 + j);
        }
        c = c + 2;
        printf("\n");
    }

    return 0;
}