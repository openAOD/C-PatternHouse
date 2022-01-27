#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*n - 1; j++) {
            if(j == 1 || j == 2*n - 3 || (j == n - i + 1 || j == n + i - 3) && i > 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}