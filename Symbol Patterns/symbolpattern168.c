#include <stdio.h>

int main()
{
    int height = 3, width = 4, space = width*2, x = 1;
    
    for(int i = 1; i <= height; i++) {
        for(int j = x; j <= width; j++) {
            for(int s = space; s >= j; s--)
                printf(" ");
                
            for(int k = 1; k <= j; k++)
                printf("* ");
                
            printf("\n");
        }
        x += 2;
        width += 2;
    }
    for(int i = 1; i <= 4; i++) {
        for(int s = space - 3; s >= 1; s--)
            printf(" ");
                
        for(int k = 1; k <= 4; k++)
            printf("* ");
                
        printf("\n");
    }
    return 0;
}