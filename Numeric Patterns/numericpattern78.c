#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int s = n - 1; s >= i; s--)
            printf("   ");
        
        for(int j = 1; j <= i; j++)
            printf("%2d ", i * j);
            
        printf("\n");
    }
    return 0;
}