#include <stdio.h>

int main()
{
    int n = 5, x = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) {
            if(i <= n/2 + 1)
                printf("%d ", i + j - 1);
            else
                printf("%d ", i + j - x);
        }
        if(i <= n/2)
            x -= 2;
        else
            x += 2;
        printf("\n");
    }
    return 0;
}