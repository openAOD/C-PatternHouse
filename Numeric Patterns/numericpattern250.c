#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == n || j == n || j == n - i + 1)
                printf("%d ", i);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}