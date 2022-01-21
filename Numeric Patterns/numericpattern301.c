#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*n; j++) {
            if(j >= n- i + 1 && j <= n + i - 1)
                printf("* ");
            else if(j <= n)
                printf("%d ", j);
            else
                printf("%d ", 2*n - j);
        }
        printf("\n");
    }
    return 0;
}