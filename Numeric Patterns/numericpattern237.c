#include <stdio.h>
int main() {
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((j == height/2-1 || j == height/2+1) && i == height/2) {
                printf("0 ");
            }
            else if ((i == height/2-1 || i == height/2+1) && j == height/2) {
                printf("0 ");
            }
            else {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
