//Print "A"
#include <stdio.h>
int main() {
    int height = 5, mid = height/2 + 1;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j < height*2; j++) {
            if ((i == mid && j > height - mid && j < height + mid) || j == height - i + 1 || j == height + i - 1) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
