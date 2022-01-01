#include <stdio.h>

int main()
{
    int n = 5, sum = n*(n+1)/2;
    for(int i = n; i >= 1; i--) {
        for(int j = n; j >= i; j--) {
            printf("%2d ", sum--);
        }
        printf("\n");
    }
    return 0;
}