#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++) {
        for (char j = 'E'; j >= 'A'; j--)
            printf("%c ", j);
        printf("\n");
    }

    return 0;
}