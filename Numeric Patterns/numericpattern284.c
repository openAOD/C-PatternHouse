#include <stdio.h>

int main()
{
    int n = 7, x = 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*x; j++) {
            if(i <= n/2 + 1 && j % 2 == 1) 
                printf("%d ", i);
            else if(i > n/2 + 1 && j % 2 == 1)
                printf("%d ", n - i + 1);
            else
                printf("* ");
        }
        if(i <= n /2) 
            x++;
        else
            x--;
        printf("\n");
    }
    return 0;
}