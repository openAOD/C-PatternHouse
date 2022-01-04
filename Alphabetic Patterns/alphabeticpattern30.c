
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
        for (int j = c; j >= 1; j--)
        {
            printf("%c", j + 64);
        }
        printf("\n");
        c--;
    }

    return 0;
}