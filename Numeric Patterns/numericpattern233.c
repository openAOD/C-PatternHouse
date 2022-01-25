#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5, mid = n/2 + 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == mid || j == mid)
                printf("%d ", abs(i - j));
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}