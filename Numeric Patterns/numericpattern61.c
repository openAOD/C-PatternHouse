#include <stdio.h>

int main()
{
    int n = 5, x = 1;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%2d ", x++);
        }
        printf("\n");
    }
    return 0;
}