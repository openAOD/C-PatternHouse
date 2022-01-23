#include <stdio.h>
int main() {
    int rows = 5;
    int i,j;
    for (i = 1; i <= rows; i++) {
        for (j = i; j <= rows; j++) {
            if (j == rows || j == i || i == 1) {
                printf("%d ",rows-i+1);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}