#include <stdio.h>

int main()
{
    int n = 5, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == 1 || j == n || ((j == x || j == n - x + 1) && i <= n/2 + 1))
                printf("M ");
            else
                printf("  ");
        }
        x++;
        printf("\n");
    }
    return 0;
}