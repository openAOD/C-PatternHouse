#include <stdio.h>

int main()
{
    int height = 5, x  = 1;
    
    for(int i = 0; i < height; i++) {
        for(int j = height - 1; j > i; j--)
            printf(" ");
            
        for(int k = 0; k <= i; k++)
            printf("* ");
            
        for(int j = 2*height - 2; j >= x; j--)
            printf(" ");
        
        for(int k = 0; k <= i; k++)
            printf("* ");
        
        x += 2;
        printf("\n");
    }
    return 0;
}