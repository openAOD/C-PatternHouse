#include <stdio.h>
int main() {
    int rows = 5;
    int i,j;
    int counter = 1;
    for (i = 1; i <= rows; i++) {
        for (j = i; j <= rows; j++) {
            if (j == rows || j == i || i == 1) {
                printf("%d ",counter++);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}