#include <stdio.h>
int main() {
    int rows = 5;
    int i,j;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            int value = j == rows/2+1 ? i : j;
            if (j == rows/2+1 || i == rows/2+1) {
                printf("%d ",value);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}