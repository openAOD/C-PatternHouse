#include <stdio.h>

int main()
{
    int n = 4, k = 0;
    for (int i = 1; i <= n+1; i++) {
        for (int j = n-i+1; j <= (2 * n) - i; j++) {
            if (i % 2 == 1) {
                k++;
                printf("%3d", k);
            }

            else {
                printf("%3d", k);
                k--; 
            }
        }
        k += n; 
        printf("\n");
    }
    return 0;
}