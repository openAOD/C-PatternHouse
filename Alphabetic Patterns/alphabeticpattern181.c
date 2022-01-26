#include <stdio.h>

int main()
{
    int n = 5, mid = n/2 + 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= mid; j++) {
            if(i == 1 || j == 1 || i == mid || (j == mid && i < mid))
                printf("P ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}