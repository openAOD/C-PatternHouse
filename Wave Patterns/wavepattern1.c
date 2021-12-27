#include <stdio.h>

int main()
{
    int n = 4;
    int height = n - 1, length = n, pc = n - 1;

    for (int i = 0; i <= height; i++) {
        for (int j = 0; j <= 2 * height * length; j++) {
            if ((j % (height * 2) == pc) || (j % (height * 2) == height + i))
                printf("*");
            else
                printf(" ");
        }
        pc -= 1;
        printf("\n");
    }
    return 0;
}