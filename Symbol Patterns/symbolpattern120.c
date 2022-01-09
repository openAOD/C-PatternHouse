#include <stdio.h>

int main()
{
    int n = 7, x = n/2 + 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == x || i == n/2 + 1)
                printf("* ");
            else 
                printf("  ");
        }
        if(i <= n/2)
            x--;
        else 
            x++;
        printf("\n");
    }
    
    return 0;
}
