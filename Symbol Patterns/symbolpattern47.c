#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            if(j % 2 == 0)
                printf("* ");
            else
                printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}