#include <stdio.h>

int main()
{
    int c = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= c; j++)
        {
            printf("%c", i + 64);
        }
        printf("\n");
        c--;
    }

    return 0;
}