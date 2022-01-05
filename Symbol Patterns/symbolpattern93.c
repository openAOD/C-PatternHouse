#include <stdio.h>
#include <math.h>

int main() 
{
    int n = 5;
    for(int i = n; i >= -n; i--) {
        for(int j = 1; j <= abs(i); j++)
            printf(" ");
        
        for(int k = n; k >= abs(i); k--)
            printf("* ");
        
        printf("\n");
    }
    return 0;
}