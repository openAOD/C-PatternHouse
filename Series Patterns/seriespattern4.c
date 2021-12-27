#include <stdio.h>

int main()
{
    int count;
    for (int n = 2; n <= 20; n++) {
        count = 0;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                count++;
                break;
            }
        }
        if (count == 0)
            printf("%d ", n);
    }
    return 0;
}