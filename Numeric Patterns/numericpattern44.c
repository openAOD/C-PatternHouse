#include <stdio.h>

int main()
{
    int n = 5, x = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%2d ", x - i);
            x++;
        }
        printf("\n");
    }
    return 0;
}