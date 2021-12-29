#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 0; i <= n; i++) {
        for (int j = n-i; j >= 0; j--) 
            printf("%c ", j + 65);
        printf("\n");
    }

    return 0;
}