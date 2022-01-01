#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}