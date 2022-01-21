#include <stdio.h>

int main()
{
    int n = 7, x = n/2 + 1, num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) {
            printf("%3d", num++);
        }
        if(i <= n/2)
            x--;
        else
            x++;
        printf("\n");
    }
    return 0;
}