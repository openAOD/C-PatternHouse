#include <stdio.h>

int main() 
{
    int height = 5, length = 4;
    int inSpace = 1, outSpace = 2;
    int inc = 1;
    int jump = (height * 3) - (height + 1);
    int ch = 'A' + height - 1;
    
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= length; j++) {
            for(int k = 1; k <= outSpace; k++)
                printf(" ");
            printf("%c", ch);
            
            for(int k = 1; k <= inSpace; k++)
                printf(" ");
            ch += inc;
            
            if(ch > 'Z')
                ch = ch - 26;
            printf("%c", ch);
            
            for(int k = 1; k <= outSpace; k++)
                printf(" ");
            printf(" ");
            ch += jump;
            if(ch > 'Z')
                ch = ch - 26;
        }
        
        outSpace = (i + 1 != height);
        inSpace = (i + 1 != height) ? 3 : 5;
        ch = 'A' + height - i - 1;
        inc += 2;
        jump -= 2;
        printf("\n");
    } 
    return 0;
}