//Print "R"
#include <stdio.h>
int main() {
    int height = 5;
    int width = height/2+1;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (j == 0 || (j == width-1 && i < width)) {
                printf("* ");
            }
            else if (i == 0 || i == width-1) {
                printf("* ");
            }
            else if (j == i-width+1 && i>=width) {
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
