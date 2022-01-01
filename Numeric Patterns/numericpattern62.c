#include <stdio.h>

int main()
{
    int n = 5, x = n*(n+1)/2;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            printf("%2d ", x--);
        }
        printf("\n");
    }
    return 0;
}