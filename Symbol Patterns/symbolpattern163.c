#include <stdio.h>

int main()
{
    int n = 7, x = n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2*n; j++) {
            if(j == x || j == 2*n - x + 1)
                printf("*");
            else
                printf(" ");
        }
        if(i % 2 == 0)
            x-= 2;
        printf("\n");
    }
    
    return 0;
}