#include <stdio.h>

int main()
{
    int n = 7, x = n/2 + 1, num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) {
            if(j == x)
                printf("%d ", num);
            else
                printf("  ");
        }
        if(i <= n/2) {
            x--;
            num++;
        }
        else { 
            x++;
            num--;
        }
            
        printf("\n");
    }
    return 0;
}