#include <stdio.h>

int main()
{
    int n = 5, mid = n/2 + 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == mid || i == n || j == n)
                printf("3 ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}