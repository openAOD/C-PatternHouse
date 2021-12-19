#include <stdio.h>

char alphabet;
int counter;

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
        printRightPattern(i);
        
        printf("\n");
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("   ");
    }
}

void printRightPattern (int total) {

    counter = total;

    for (int i = 1; i <= total; i++) {

        printf ("%2d ", counter++);
    }
}

void printLeftPattern (int total) {

    alphabet = (64 + total);

    for (int i = 1; i <= total; i++) {

        printf (" %c ", alphabet++);
    }
}