#include <stdio.h>

int main()
{
    int n = 5, x = n, y, num;
    for(int i = n; i >= 1; i--) {
        num = x;
        y = i + 1;
        for(int j = n; j >= i; j--) {
            printf("%2d ", num);
            num = num - y;
            y++;
        }
        x = x + i - 1;
        printf("\n");
    }
    return 0;
}