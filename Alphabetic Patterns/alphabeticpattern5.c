#include <stdio.h>

int main()
{
    int n = 5;
    char ch = 'A';
    for (char i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("%c ", ch++);
        printf("\n");
    }

    return 0;
}