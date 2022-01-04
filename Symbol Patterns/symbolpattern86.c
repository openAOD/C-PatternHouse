#include <stdio.h>

int main()
{
    int n = 5, x = n, y = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n*2; j++) {
            if(j == x || j == y)
                printf("*");
            else 
                printf(" ");
        }
        x--;
        y++;
        printf("\n");
    }
    return 0;
}