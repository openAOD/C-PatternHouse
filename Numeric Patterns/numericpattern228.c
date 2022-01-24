//Print "X"
#include <stdio.h>
int main() {
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (j == i || j == height-1-i) {
                printf("%d ",j+1);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
