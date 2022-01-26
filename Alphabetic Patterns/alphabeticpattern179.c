#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == 1 || j == n || i == j)
                printf("N ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}