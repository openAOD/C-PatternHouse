#include <stdio.h>

int counter = 1;

void printPattern (int);
void upperHalf (int);
void lowerHalf (int);

int main () {

    int totalLines;

    printf("How many lines to be printed? -- ");
    fflush(stdout);
    scanf("%d", &totalLines);

    printf("\nYour pattern looks like this:\n");
    printf("\n");

    printPattern (totalLines);

    printf("\n");
    return 0;
}

void printPattern (int totalLines) {

    int upperLines = ((totalLines + 1) / 2), lowerLines = (totalLines - upperLines);

    upperHalf (upperLines);
    lowerHalf (lowerLines);
}

void upperHalf (int total) {

    for (int i = 1; i <= total; i++) {

        counter = ((2 * i) - 1);

        for (int j = 1; j <= ((2 * i) - 1); j++) {

            printf("%3d ", counter);
        }

        printf("\n");
    }
}

void lowerHalf (int total) {

    for (int i = total; i >= 1; i--) {

        counter = ((2 * i) - 1);

        for (int j = 1; j <= ((2 * i) - 1); j++) {

            printf("%3d ", counter);
        }

        printf("\n");
    }
}