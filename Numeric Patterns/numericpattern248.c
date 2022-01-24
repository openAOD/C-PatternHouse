#include <stdio.h>

int main()
{
    int n = 5, num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i + 1; j++) {
            if(i == 1 || j == 1 || j == n - i + 1) 
                printf("%2d ", num++);
            else
                printf("   ");
        }
        printf("\n");
   }
   return 0;
}
