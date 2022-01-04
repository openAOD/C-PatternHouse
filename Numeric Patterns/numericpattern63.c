#include <stdio.h>

int main()
{
    int n = 4, num = n*n + 1, temp = 1;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        num--;
        num = num - ((i - 1) * 2);
        printf("\n");
    }
    return 0;
}