#include <stdio.h>

int main()
{
    int n = 5;
    for (char i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c ", i + j + 65);
        printf("\n");
    }

    return 0;
}