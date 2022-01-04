#include <stdio.h>

int main()
{
    int n = 5;
    char ch = 'A';
    for(int  i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if((i + j) % 2 == 1)
                printf("%c ", ch++);
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}