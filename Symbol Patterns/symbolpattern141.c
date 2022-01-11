#include <stdio.h>

int main()
{
    int n = 7;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == i || j == n/2 + 1 || i == n/2 + 1 || j == n - i + 1)
                printf("* ");
            else 
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}