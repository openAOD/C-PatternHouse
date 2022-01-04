#include <stdio.h>

int main()
{
    for (int i = 4; i >= 0; i--) {
        for (int j = 5; j >= i + 1; j--) 
            printf("%c ",  j + 64);
        printf("\n");
    }

    return 0;
}

