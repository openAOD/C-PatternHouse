#include <stdio.h>

void printPattern (int);
void printWhitespaces (int);

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

    int whiteSpace, printStar, counter;

    for (int i = totalLines; i >= 1; i--) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printStar = ((2 * i) - 1);
        counter = i;

        for (int j = 1; j <= printStar; j++) {

            if (j & 1) {

                printf ("%2d ", counter--);
            } else {

                printf ("   ");
            }
        }

        printf("\n");
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("   ");
    }
}