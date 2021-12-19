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

    char alphabet;

    for (int i = 1; i <= total; i++) {

        alphabet = (65 + (total - i));

        for (int j = 1; j <= i; j++) {

            printf("%c ", alphabet++);
        }

        printf("\n");
    }
}

void lowerHalf (int total) {

    char alphabet;

    for (int i = total; i >= 1; i--) {

        alphabet = (65 + (total - (i - 1)));

        for (int j = 1; j <= i; j++) {

            printf("%c ", alphabet++);
        }

        printf("\n");
    }
}