#include <stdio.h>

int main()
{
    int n = 5, num = 1;
    for(int  i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if((i + j) % 2 == 1)
                printf("%2d ", num++);
            else
                printf("%2c ", '*');
        }
        printf("\n");
    }
    return 0;
}