
#include <stdio.h>

int main()
{

    int n = 5, x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (i != n / 2)
                printf("* ");
            else
                printf("%c ", j + 65);
        }
        if (i < n / 2)
            x++;
        else
            x--;
        printf("\n");
    }
    return 0;
}
