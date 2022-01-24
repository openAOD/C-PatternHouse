//Print "S"
#include <stdio.h>
int main() {
    int height = 5;
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height-1 || i == height/2) {
                printf("* ");
            }
            else if ((j == 0 && i <= height/2) || (j == height-1 && i >= height/2)) {
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
