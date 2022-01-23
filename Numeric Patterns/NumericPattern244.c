#include <stdio.h>
int main() {
    int rows = 5;
    int i,j;
    for (i = 1; i <= rows; i++) {
        int value = 3*rows-i-1;
        for (j = 1; j <= i; j++) {
            if (i == rows) {
                printf("%d ",rows+j-1);
            }
            else if (j == 1) {
                printf("%d ",i);
            }
            else if (i == j) {
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