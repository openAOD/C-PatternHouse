#include <stdio.h>

void printPattern (int);
void upperHalf (int);
void lowerHalf (int);

int main () {

    int totalColumns, totalLines;

    printf("How many columns to be printed? -- ");
    fflush(stdout);
    scanf("%d", &totalColumns);

    totalLines = ((2 * totalColumns) - 1);

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

    int counter;

    for (int i = 1; i <= total; i++) {

        counter = 1;

        for (int j = 1; j <= i; j++) {

            printf("%2d ", counter++);
        }

        printf("\n");
    }
}

void lowerHalf (int total) {

    int counter;

    for (int i = total; i >= 1; i--) {

        counter = 1;

        for (int j = 1; j <= i; j++) {

            printf("%2d ", counter++);
        }

        printf("\n");
    }
}