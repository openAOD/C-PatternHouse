#include <stdio.h>

int main()
{
    int n = 5, x = n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*n; j++) {
            if(j >= x && j <= n + i - 1)
                printf("* ");
            else if(j <= n)
                printf("%d ", j);
            else
                printf("%d ", 2*n - j);
        }
        x--;
        printf("\n");
    }
    return 0;
}