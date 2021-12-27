#include <stdio.h>

int main()
{
    int n = 10, a = 1, d = 3;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        a = a + d;
    }
    return 0;
}