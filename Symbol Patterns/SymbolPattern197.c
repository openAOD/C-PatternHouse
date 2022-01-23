//Print "Q"
#include <stdio.h>
int main() {
    int height = 5;
    int i, j, width = height+1;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if ((i == 0 && j != width-1) || (j == 0 && i != height-1) || (j == width-2 && i != height-1) || (i == height-2 && j != width-1)) {
                printf("* ");
            }
            else if
            (i == height-1 && j>=width-1) {
                printf("* ");
            }
            else if (j == width-3 && (i == height-3 && i != height-1)) {
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
