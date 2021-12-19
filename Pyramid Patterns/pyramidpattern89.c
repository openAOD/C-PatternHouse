#include <stdio.h>

void printPattern (int);
void printWhitespaces (int);        // Function to print whitespaces
void printTriangle (int);           // Function to print triangle of stars

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

    // Loop to print upper triangle of stars
    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = ((2 * totalLines) - i);
        printStar = ((2 * i) - 1);

        printWhitespaces (whiteSpace);
        printTriangle(printStar);

        printf("\n");
    }

    // Loop to print left & right triangles of stars
    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printStar = ((2 * i) - 1);

        // Printing left triangle
        printWhitespaces (whiteSpace);
        printTriangle(printStar);

        printWhitespaces (whiteSpace);
        printf(" ");

        // Printing right triangle
        printWhitespaces (whiteSpace);
        printTriangle (printStar);

        printf("\n");
    }
}

// Function to print whitespaces
void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf(" ");
    }
}

// Function to print triangle of stars
void printTriangle (int total) {

    for (int i = 1; i <= total; i++) {

        (i & 1) ? printf ("*") : printf (" ");
    }
}