#include <stdio.h>

int main()
{
    int n = 7, mid = n/2 + 1, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= mid; j++) {
            if(i == 1 || j == 1 || i == mid || (j == mid && i < mid) || j == x)
                printf("R ");
            else
                printf("  ");
        }
        if(i >= mid)
            x++;
        printf("\n");
    }
    return 0;
}