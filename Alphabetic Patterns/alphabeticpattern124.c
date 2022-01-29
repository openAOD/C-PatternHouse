
#include <stdio.h>

int main()
{

    int n = 7, x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2 * x; j++)
        {
            if (j <= x)
                printf("%c ", j + 64);
            else
                printf("%c ", 2 * x - j + 64);
        }
        if (i <= n / 2)
            x++;
        else
            x--;
        printf("\n");
    }
    return 0;
}