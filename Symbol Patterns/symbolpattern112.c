#include <stdio.h>

int main()
{
    int n = 5, x = 5;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*n; j++) {
            if(j >= x && j < n + i && j % 2 == 1)
                printf("* ");
            else if(j >= x && j < n + i && j % 2 == 0)
                printf("# ");
            else
                printf("  ");
        }
            
        x--;    
        printf("\n");
    }
    return 0;
}