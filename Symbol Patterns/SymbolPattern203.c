//Print "W"
#include <stdio.h>
int main() {
    int height = 5;
    int width = height*2-3;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (j == 0 || j == width-1) {
                printf("* ");
            }
            else if (j == height-i-1 && i != 0) {
                printf("* ");
            }
            else if (i == j-2 && i != 0) {
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
