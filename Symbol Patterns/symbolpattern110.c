#include <stdio.h>

int main()
{
    int n = 5, x = 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) 
            printf("* ");
            
        for(int k = 1; k < 2 * i; k++) {
            if(k <= i)
                printf("%d ", x - i + k);
            else 
                printf("%d ", x + i - k);
        }
        
        for(int j = 1; j <= n - i; j++)
            printf("* ");
        
        x += 2;
        printf("\n");
    }
    return 0;
}