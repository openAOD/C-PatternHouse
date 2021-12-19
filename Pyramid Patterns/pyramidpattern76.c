#include <stdio.h>

void printPattern (int);
void printWhitespaces (int);

void printLeftPattern (int);
void printRightPattern (int);

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

    int whiteSpace, printStar;

    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);
        printLeftPattern(i);

        printWhitespaces (whiteSpace);

        printWhitespaces (whiteSpace);
        printRightPattern(i);
        
        printf("\n");
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("  ");
    }
}

void printLeftPattern (int total) {

    for (int i = 1; i <= (2 * total - 1); i++) {

        printf ("* ");
    }
}

void printRightPattern (int total) {

    for (int i = 1; i <= (2 * total - 1); i++) {

        printf ("* ");
    }
}