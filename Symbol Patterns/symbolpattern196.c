//Print "P"
#include <stdio.h>
int main() {
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= height/2; j++) {
            if (j == 0 || i == 0 || i == height/2) {
                printf("* ");
            }
            else if (j == height/2 && i<=height/2) {
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
