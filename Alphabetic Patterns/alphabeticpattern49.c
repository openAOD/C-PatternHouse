
#include <stdio.h>

int main()
{
    int c = 1;
    for (int i = 4; i >= 1; i--)
    {
        for (int j = i; j <= 4; j++)
        {
            printf("%c", c + 64);
        }
        printf("\n");
        c++;
    }
    for (int i = 2; i <= 4; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            printf("%c", c + 64);
        }
        printf("\n");
        c++;
    }

    return 0;
}