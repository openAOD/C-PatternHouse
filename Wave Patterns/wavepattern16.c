#include <stdio.h>

int main() 
{
    int height = 5, length = 4;
    int inSpace = 1, outSpace = 2;

    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= length; j++) {
            for(int k = 1; k <= outSpace; k++)
                printf(" ");
            printf("0");

            for(int k = 1; k <= inSpace; k++)
                printf(" ");
            printf("0");

            for(int k = 1; k <= outSpace; k++)
                printf(" ");
            printf(" ");
        }
        
        outSpace = (i + 1 != height);
        inSpace = (i + 1 != height) ? 3 : 5;
        printf("\n");
    } 
    return 0;
}