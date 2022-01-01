#include <stdio.h>

int main()
{
    int n = 5, x;
    for(int i = 1; i <= n; i++) {
        x = i;
        for(int j = 1; j <= i; j++) {
            printf("%d ", x);
            x = x + (n - j);
        }
        printf("\n");
    }
    return 0;
}