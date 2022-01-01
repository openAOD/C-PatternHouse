#include <stdio.h>

int main()
{
    int n = 6;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", i % 2);
        }
        printf("\n");
    }
    return 0;
}