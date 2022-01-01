#include <stdio.h>

int main()
{
    int n = 5, num;
    for(int i = n; i >= 1; i--) {
        num = i;
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = num + n - j;
        }
        printf("\n");
    }
    return 0;
}