#include <stdio.h>

int main()
{
      
    int n = 7, x = 1, y = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= x || j >= y)
                printf("%c ", i + 64);
            else
                printf("  ");
        }
        if(i <= n/2) {
            x++;
            y--;
        }
        else {
            x--;
            y++;
        }
    
    
       printf("\n");
    }
    return 0;
}
