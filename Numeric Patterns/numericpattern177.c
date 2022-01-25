#include <stdio.h>

int main()
{
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i * 2; j++) {
            if(j <= i)
                printf("%d ", j);
            else
                printf("%d ", i*2 - j + 1);
        }
        printf("\n");
    }
    return 0;
}