#include <stdio.h>

int main()
{
    int n = 4, x = 1, y, t = 1;
    for(int  i = 1; i <= n; i++) {
        y = t;
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 1)
                printf("%2d ", x);
            else
                printf("%2d ", y);
                
            x++;
            y--;
            if(j != i)
                printf("* ");
        }
        t = t + i + 1;
        printf("\n");
    }
    return 0;
}