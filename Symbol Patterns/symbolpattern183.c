//Print "C"
#include <stdio.h>
int main() {
    int height = 5;
    int width = height;
    for (int i = 1;i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if (i == 1 || j == 1 || i == width) {
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

    
