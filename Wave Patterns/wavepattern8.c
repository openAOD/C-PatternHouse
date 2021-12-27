#include <stdio.h>

int main()
{
    int n = 4;
    int height = n - 1, length = n, pc = n - 1;

    for (int i = 0; i <= height; i++) {
        for (int j = 0; j < 2 * height * length; j++) {
            if (j % (n * 2) == pc)
                printf("/");
            else if(j % (n * 2) == n + i )
                printf("\\");
            else
                printf(" ");
        }
        pc -= 1;
        printf("\n");
    }
    return 0;
}