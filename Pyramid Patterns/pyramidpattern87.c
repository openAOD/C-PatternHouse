#include <stdio.h>

char character;

void printPattern (int);
void printWhitespaces (int);

char swapCharacter (char);

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

    int whiteSpace, print;

    for (int i = 1; i <= totalLines; i++) {

        (i & 1) ? (character = '*') : (character = '#');

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        print = ((2 * i) - 1);

        for (int j = 1; j <= print; j++) {

            printf ("%c ", character);
            character = swapCharacter (character);
        }

        printf("\n");
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("  ");
    }
}

char swapCharacter (char character) {

    return (character == '#') ? '*' : '#';
}