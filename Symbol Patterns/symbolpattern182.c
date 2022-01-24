//Print "B"
#include <stdio.h>
int main() {
    int height = 5;
    int width = (2 * height) - 1;
    int half = (height / 2);
    for (int i = 0; i < height; i++) {
        printf("*");
        for (int j = 0; j < height*2; j++) {
            if ((i == 0 || i == height - 1 || i == half) && j < (width - 2))
                printf("*");
            else if (j == (width - 2) && !(i == 0 || i == height - 1 || i == half))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
