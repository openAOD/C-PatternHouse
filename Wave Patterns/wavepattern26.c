#include <stdio.h>

int main() 
{
    int height = 5, length = 3;
    
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= length; j++) {
            for(int k = 1; k <= height; k++) {
                if(i == k || i + k == height + 1) 
                    printf("][");
                else
                    printf("  ");
            }
        }
        printf("\n");
    } 
    return 0;
}