#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, num = 0;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);
            n1 = n2;
            n2 = num;
            num = n1 + n2;
        }
        n1 = 0;
        n2 = 1;
        num  = 0;
        printf("\n");
    }
    return 0;
}