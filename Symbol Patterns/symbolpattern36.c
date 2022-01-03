#include <stdio.h>

int main()
{
    int n = 4, x = 1, y;
    for(int  i = 1; i <= n; i++) {
        y = x + i; 
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 1)
                printf("%2d", x + j - 1);
            else
                printf("%2d", y - j);
            
            if(j != i)
                printf("# ");
        }
        x += i;
        printf("\n");
    }
    return 0;
}