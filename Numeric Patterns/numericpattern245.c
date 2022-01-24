#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= 1; j--) {
            if(i == n || j == n || j == n - i + 1) 
                printf("%d ", j);
            else
                printf("  ");
        }
        printf("\n");
   }
   return 0;
}
