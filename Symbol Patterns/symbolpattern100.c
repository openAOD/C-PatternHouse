#include <stdio.h>

int main()
{
    int n = 5, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) {
            if(i != n/2 + 1)
                printf("* ");
            else
                printf("%c ", j + 64);
        }
        if(i <= n/2)
            x++;
        else
            x--;
        
        printf("\n");
    }
    return 0;
}
