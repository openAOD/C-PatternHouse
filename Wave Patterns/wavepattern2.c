#include <stdio.h>

int main() 
{
    int n = 4;
    int height = n - 1, length = n, x = n - 1;

    for(int i = 0; i <= height; i++) {
        for(int j = 0; j <= height*length*2; j++) {
            if(j % (height*2) == x || j % (height*2) == height + i)
                printf("|");
            else
                printf(" ");
        }
        x--;
        printf("\n");
    }
    return 0;
}