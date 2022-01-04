#include <stdio.h>

int main()
{
    int n = 4;
    int size = n*(n+1), x = 1, y;
    
    for(int i = 1; i <= n; i++) {
        y = size - n + i;
        for(int j = 1; j <= 2*n; j++) {
            if(j > 2 * (i - 1)) {
                if(j <= (2*n)/ 2 + i - 1) {
                    printf("%2d ", x);
                    x++;
                }
                else {
                    printf("%2d ", y);
                    y++;
                }
            }
            else
                printf(" _ ");
        }
        printf("\n");
        size -= (n - i + 1);
    }
    return 0;
}