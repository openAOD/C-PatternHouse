 //Print "F"
#include <stdio.h>
int main() {
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
        if (i == 0 || j == 0 || i == height/2) {
            printf("* ");
        }
            else {
                continue;
            }
        }
        printf("\n");
    }
    return 0;
}
