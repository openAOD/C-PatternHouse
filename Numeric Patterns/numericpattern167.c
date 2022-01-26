#include <stdio.h>

int main()
{
    int n = 4, x = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i * 2; j++) {
            if(j <= i)
                printf("%d ", j + x);
            else
                printf("%d ", i * 2 - j + x);
        }
        x += i;
        printf("\n");
    }
    return 0;
}