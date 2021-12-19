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

    int whiteSpace, printAlphabet, update;
    char alphabet;

    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printAlphabet = ((2 * i) - 1);
        alphabet = (64 + i);
        update = 1;

        for (int j = 1; j <= printAlphabet; j++) {

            printf ("%c ", alphabet);
            
            if(j == i) {

                update = -update;
            }

            alphabet += update;
        }

        printf("\n");
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("  ");
    }
}