//Print "D"
#include <stdio.h>
int main() {
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++) {
        printf("* ");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1) && j < height - 1)
                printf("* ");
            else if (j == height - 1 && i != 0 && i != height - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
