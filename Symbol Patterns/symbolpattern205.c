//Print "Y"
#include <stdio.h>
int main() {
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == j || j == height-i-1) && i <= height/2) {
                printf("* ");
            }
            else if (i >= height/2 && j == height/2) {
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
