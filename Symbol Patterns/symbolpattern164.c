#include <stdio.h>

int main()
{
    int n = 3, c1 = n*2 - 1, c2 = 3;
    
    for(int i = 1; i <= n; i++) {
        for(int j = n - 2; j < i; j++)
            printf("    ");
            
        for(int k = 1; k <= c1; k++)
            printf("* ");
            
        c1 -= 2;
        printf("\n");
    }
    for(int i = 1; i < n; i++) {
        for(int j = n - 2; j >= i; j--)
            printf("    ");
            
        for(int k = 1; k <= c2; k++)
            printf("* ");
            
        c2 += 2;
        printf("\n");
    }
    
    return 0;
}