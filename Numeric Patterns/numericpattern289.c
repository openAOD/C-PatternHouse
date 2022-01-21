#include <stdio.h>

int main()
{
    int n = 7, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if((j <= x || j > n - x) && j <= n/2) 
                printf("%d ", j);
            else if((j <= x || j > n - x) && j > n/2)
                printf("%d ", n - j + 1);
            else
                printf("  ");
        }
        if(i <= n /2) 
            x++;
        else 
            x--;
        printf("\n");
    }
    return 0;
}