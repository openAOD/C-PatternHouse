#include <stdio.h>

int main() 
{
    int height = 4, length = 4;
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j < length; j++) {
            if(i != height)
                printf("  ");
            else
                printf("* ");
            
            for(int k = 1; k <= 4; k++) {
                if(i == 1 || k == 1 || k == 4)
                    printf("* ");
                else
                    printf("  ");
            }
            
            if(i != height)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    } 
    return 0;
}