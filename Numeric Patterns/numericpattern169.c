#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < i * 2; j++) {
            if(j < i)
                printf("%d ", n + j - i);
            else if(j == i)
                printf("0 ");
            else
                printf("%d ", n - j + i);
        }
        printf("\n");
    }
    return 0;
}