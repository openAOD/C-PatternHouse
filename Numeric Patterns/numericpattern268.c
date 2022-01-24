#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 4, num = 1;
    for(int i = n; i >= -n; i--) {
        for(int j = 1; j <= abs(i); j++) 
            printf("  ");

        num = 1;
        
        for(int k = n; k >= abs(i); k--)
            printf("%d   ", num++);

        printf("\n");
    }
    return 0;
}