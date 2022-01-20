#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < n*2; j++) {
            if(j <= n - i + 1)
                printf("%d ", j);
            else if(j >= n + i - 1)
                printf("%d ", n*2 - j);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}