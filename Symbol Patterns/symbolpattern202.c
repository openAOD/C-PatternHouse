//Print "V"
#include <stdio.h>
int main() {
    int height = 5;
    int width = height*2-1;
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == counter || j == width - counter - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        counter++;
        printf("\n");
    }
    return 0;
}
