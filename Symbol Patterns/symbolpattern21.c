#include <stdio.h>

int main()
{
    int n = 5;
    for(int  i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j > i)
                printf("* ");
            else
                printf("%c ", j + 65);
        }
        printf("\n");
    }
    return 0;
}