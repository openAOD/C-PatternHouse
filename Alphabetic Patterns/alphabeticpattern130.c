#include <stdio.h>

int main()
{

    int n = 3;
    for (int i = n; i >= -n; i--)
    {
        for (int j = 0; j <= abs(i); j++)
            printf("%c ", j + 65);
        printf("\n");
    }
    return 0;
}