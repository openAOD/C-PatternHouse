#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            if(i <= j) {
                if(i % 2 == 0)
                    printf("* ");
                else
                    printf("%d ", j);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}