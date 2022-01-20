#include <stdio.h>

int main()
{
    int n = 5, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            printf("* ");
        
        for(int j = 1; j < 2*i; j++) {
            if(j <= i)
                printf("%d ", x - i + j);
            else
                printf("%d ", x + i - j);
        }
        
        for(int s = 1; s <= n - i; s++)
            printf("* ");
            
        x += 2;
        printf("\n");
    }
    return 0;
}