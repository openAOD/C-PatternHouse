#include <stdio.h>
int main() {
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (j == 0 || j == height-1) {
                printf("1 ");
            } 
            else if (i == 0 || i == height-1) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
