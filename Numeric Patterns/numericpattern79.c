#include <stdio.h>

int main()
{
    int n = 5, num;
    for(int i = 1; i <= n; i++) {
        for(int s = n - 1; s >= i; s--)
            printf("   ");
            
        num = 1;
        for(int j = 1; j <= i; j++) {
            printf("%2d ", num);
            num = num * (i - j)/j;
        }
            
        printf("\n");
    }
    return 0;
}