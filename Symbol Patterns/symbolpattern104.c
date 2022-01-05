#include <stdio.h>

int main()
{
    int n = 9, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n/2 + 1; j++) {
            if(j >= x)
                printf("* ");
            else
                printf("  ");
        }
        if(i <= n/2)
            x++;
        else
            x--;
        
        printf("\n");
    }
    return 0;
}
