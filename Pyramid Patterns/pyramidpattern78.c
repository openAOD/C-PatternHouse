#include <stdio.h>

void printPattern (int);

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

    int printDigit;

    for (int i = 1; i <= totalLines; i++) {

        printDigit = (totalLines - i);

        for (int j = 1; j <= printDigit; j++) {

            printf("%2d ", j);
        }

        for (int k = 1; k <= ((2 * i) - 1); k++) {

            printf (" * ");
        }

        for (int l = printDigit; l >= 1; l--) {

            printf("%2d ", l);
        }

        printf("\n");
    }
}