#include <stdio.h>

int main()
{
    for (char i = 'E'; i >= 'A'; i--) {
        for (int j = 1; j <= 5; j++)
            printf("%c ", i);
        printf("\n");
    }

    return 0;
}