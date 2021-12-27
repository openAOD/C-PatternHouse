#include <stdio.h>

int main() 
{
    int height = 4, length = 4;
    int x = height - 1;
    char ch;
    for(int i = 0; i <= height; i++) {
        ch = 'A';
        for(int j = 0; j < height*length*2; j++) {
            if(j % (height*2) == x || j % (height*2) == height + i)
                printf("%c ", ch);
            else
                printf(" ");
            ch++;
            if(ch > 'Z')
                ch = ch - 26;
        }
        x--;
        printf("\n");
    }
    return 0;
}