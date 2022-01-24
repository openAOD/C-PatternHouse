//Print "N"
#include <stdio.h>
int main() {
    int height = 5;
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (j == 0 || j == height-1) {
                printf("* ");
            }
            else if (i == j) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
