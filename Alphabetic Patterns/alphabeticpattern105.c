#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n*2; j++) {
            if(j == n - i + 1 || j == n + i - 1)
                printf("%c", i + 64);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}