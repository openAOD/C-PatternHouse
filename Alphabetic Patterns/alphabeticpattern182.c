#include <stdio.h>

int main()
{
    int n = 7;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(((i == 1 || i == n - 1) && j <= n - 1) || ((j == 1 || j == n - 1) && i <= n - 1) || (i == j && i >= n - 2))
                printf("Q ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}