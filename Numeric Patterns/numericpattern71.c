#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = n - 1; j >= i; j--) 
            printf("  ");
            
        for(int k = 1; k <= i; k++) 
            printf("%d ", i);
        
        printf("\n");
    }
    return 0;
}