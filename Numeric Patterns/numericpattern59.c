#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            printf("%d ", n - j + i);
        }
        printf("\n");
    }
    return 0;
}