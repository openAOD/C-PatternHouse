#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = n/2; i <= n; i+= 2) {
        for(int j = 1; j < n - i; j += 2)
            printf(" ");
        
        for(int k = 1; k <= i; k++)
            printf("*");
            
        for(int j = 1; j <= n - i; j++)
            printf(" ");
            
        for(int k = 1; k <= i; k++)
            printf("*");
            
        printf("\n");
    }
    for(int i = n; i >= 1; i--) {
        for(int j = i; j < n; j++)
            printf(" ");
            
        for(int k = 1; k <= (i*2) - 1; k++)
            printf("*");
            
        printf("\n");
        
    }
    return 0;
}