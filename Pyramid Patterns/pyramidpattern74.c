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

    int whiteSpace, printStar, counter, itr = 1;
    char alphabet;

    for (int i = totalLines; i >= 1; i--) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printStar = ((2 * i) - 1);

        counter = 1;
        alphabet = 'A';

        for (int j = 1; j <= printStar; j++) {

            if (j & 1) {

                (itr & 1) ? printf ("%2d ", counter++) : printf (" %c ", alphabet++);
            } else {

                printf ("   ");
            }
        }
        
        itr++;
        printf("\n");
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("   ");
    }
}