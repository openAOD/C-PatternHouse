#include <stdio.h>

int main()
{
    int n = 4;
    for(int  i = 0; i <= n; i++) {
        for(int j = n; j >= 0; j--) {
            if(j > i)
                printf("* ");
            else
                printf("%c ", j + 65);
        }
        printf("\n");
    }
    return 0;
}