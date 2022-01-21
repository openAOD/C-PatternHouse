#include <stdio.h>

int main()
{
    int n = 5, x = n, num;
    char ch;
    for(int i = 1; i <= n; i++) {
        ch = 64 + i;
        num = i;
        for(int j = 1; j <= n*2; j++) {
            if(j >= x && j <= n) 
                printf("%d ", num++);
            else if(j <= 2*n - x + 1 && j > n)
                printf("%c ", ch++);
            else
                printf("  ");
        }
        x--;
        printf("\n");
    }
    return 0;
}