#include <stdio.h>

int main()
{
    int n = 5, x;
    for(int i = 1; i <= n; i++) {
        x = 1;
        for(int j = 1; j <= i; j++) {
            printf("%2d ", x);
            x = x * (i - j)/j;
        }
        printf("\n");
    }
    return 0;
}