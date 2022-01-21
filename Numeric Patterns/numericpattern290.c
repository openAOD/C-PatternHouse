#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 3;
    for(int i = n; i >= -n; i--) {
        for(int j = 0; j <= abs(i); j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}