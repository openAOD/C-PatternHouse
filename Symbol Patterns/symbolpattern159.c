#include <stdio.h>

int main()
{
    int n = 3;
    
    for(int i = 1; i <= n; i++) {
        for(int j = n - 1; j > 0; j--) {
            for(int s = n - 1; s >= i; s--)
                printf("  ");
                
            for(int k = 0; k < i; k++) 
                printf("* ");
                
            printf("\n");
        }
    }
    
    return 0;
}