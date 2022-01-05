#include <stdio.h>

int main()
{
    int n = 3;
    for(int i = n; i >= -n; i--) {
        for(int j = 0; j <= abs(i); j++) 
                printf("* ");
        printf("\n");
    }
    return 0;
}
