#include <stdio.h>

char alphabet = 'A';


void printPattern (int);
void upperHalf (int);
void lowerHalf (int);

void printWhitespaces (int);

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

    int whitespace;

    for (int i = 1; i <= total; i++) {

        whitespace = (total - i);
        printWhitespaces (whitespace);

        alphabet = 'A';

        for (int j = 1; j <= i; j++) {

            printf("%c ", alphabet++);
        }

        printf("\n");
    }
}

void lowerHalf (int total) {

    int whitespace;

    for (int i = total; i >= 1; i--) {

        whitespace = (total - (i - 1));
        printWhitespaces (whitespace);

        alphabet = 'A';

        for (int j = 1; j <= i; j++) {

            printf("%c ", alphabet++);
        }

        printf("\n");
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("  ");
    }
}