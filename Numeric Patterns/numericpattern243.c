#include <stdio.h>
int main() {
    int rows = 5;
    int i,j,counter = 1;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == rows) {
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
