#include <stdio.h>

int main()
{
    int height = 5, stars = 1, x  = 1;
    
    for(int i = 1; i < height; i++) {
        for(int j = height - 1; j > i; j--)
            printf(" ");
            
        for(int k = 1; k <= stars; k++)
            printf("*");
            
        for(int j = 2*height - 3; j > x; j--)
            printf(" ");
        
        for(int k = 1; k <= stars; k++)
            printf("*");
            
        stars += 2;
        x += 2;
        printf("\n");
    }
    return 0;
}