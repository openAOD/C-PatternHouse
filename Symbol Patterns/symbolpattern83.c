#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == 1 || i == 1 || i + j == n + 1)
                printf("* ");
            else 
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}