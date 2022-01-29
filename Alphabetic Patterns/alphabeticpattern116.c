#include <stdio.h>

int main()
{

    int n = 7, x = 1, y = n / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= y; j++)
            printf("  ");

        for (int k = 1; k <= x; k++)
        {
            char ch = (char)(k + 64);
            printf("%c ", ch);
        }

        if (i <= n / 2)
        {
            x += 2;
            y--;
        }
        else
        {
            x -= 2;
            y++;
        }
        printf("\n");
    }

    return 0;
}