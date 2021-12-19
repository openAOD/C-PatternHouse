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

    int whiteSpace, printNumber, counter;
    float update;

    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printNumber = ((2 * i) - 1);
        counter = 1;
        update = 2;

        for (int j = 1; j <= printNumber; j++) {

            printf ("%2d ", counter);

            if(j == i) {

                update = 0.5;
            }

            counter *= update;
        }

        printf("\n");
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("   ");
    }
}