#include <stdio.h>

int main() 
{
    int height = 5, length = 4;
    int inSpace = 1, outSpace = 2;
    int inc = 1, num = height;
    int jump = (height * 3) - (height + 1);

    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= length; j++) {
            for(int k = 1; k <= outSpace; k++)
                printf(" ");
            printf("%02d", num);
            
            for(int k = 1; k <= inSpace; k++)
                printf(" ");
            num += inc;
            printf("%02d", num);
            
            for(int k = 1; k <= outSpace; k++)
                printf(" ");
            printf(" ");
            num += jump;
        }
        
        outSpace = (i + 1 != height);
        inSpace = (i + 1 != height) ? 3 : 5;
        num = height - i;
        inc += 2;
        jump -= 2;
        printf("\n");
    } 
    return 0;
}