#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            if(i <= j) {
                if(j % 2 == 0)
                    printf("* ");
                else
                    printf("# ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}