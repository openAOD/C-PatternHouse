#include <stdio.h>

int main()
{
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i * 2; j++) {
            if(j <= i)
                printf("%d ", i - j + 1);
            else
                printf("%d ", j - i + 1);
        }
        printf("\n");
    }
    return 0;
}