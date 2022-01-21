#include <stdio.h>

int main()
{
    int n = 5, num;
    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        num = 1;
        
        for(int j = 1; j <= 2*n; j++) {
            if(j >= n - i + 1 && j<= n)
                printf("%c ", ch++);
            else if(j < n + i + 1 && j > n)
                printf("%d ", num++);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}