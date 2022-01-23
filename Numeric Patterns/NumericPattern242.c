#include <stdio.h>
int main() {
    int rows = 5;
    int i,j;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == rows) {
                printf("%d ",j);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}