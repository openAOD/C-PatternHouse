#include <stdio.h>

int main()
{
    int n = 7, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) {
            if(j == x)
                printf("%c", j + 64);
            else
                printf("  ");
        }
        if(i <= n /2)
            x++;
        else
            x--;
        printf("\n");
    }
    return 0;
}