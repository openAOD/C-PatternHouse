#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            if(i == j || i + j == n + 1)
                printf("%d ", i);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}