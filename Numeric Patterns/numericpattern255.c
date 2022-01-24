#include <stdio.h>

int main()
{
    int n = 5, num = 1;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            if(i == n || j == n || j == n - i + 1)
                printf("%2d ", num++);
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}