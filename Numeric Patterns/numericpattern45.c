#include <stdio.h>

int main()
{
    int n = 4, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%3d ", x * x);
            x++;
        }
        printf("\n");
    }
    return 0;
}