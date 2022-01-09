#include <stdio.h>

int main()
{
    int height = 5, x = 1;
    
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= height; j++) 
            printf(" ");
            
        for(int k = height - 1; k >= i; k--)
            printf(" ");
            
        for(int j = 1; j <= i; j++)
            printf("* ");
        
        printf("\n");
    }
    
    for(int i = 0; i < height; i++) {
        for(int j = height - 1; j > i; j--) 
            printf(" ");
            
        for(int k = 0; k <= i; k++)
            printf("* ");
            
        for(int j = 2*height - 1; j > x; j--)
            printf(" ");
        
        for(int k = 0; k <= i; k++)
            printf("* ");
            
        x += 2;
        printf("\n");
    }
    return 0;
}
