#include <stdio.h>

void printPattern (int);
void printWhitespaces (int);
int printNumbers (int, int);

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

    int whiteSpaces = (totalLines / 2), counter = 1;

    for (int i = 1; i <= totalLines; i++) {

        if ((i & 1) == 0) {

            printf("\n");
            continue;
        }

        printWhitespaces(whiteSpaces);
        counter = printNumbers(i, counter);

        whiteSpaces--;
        printf("\n");
    }

}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        printf("    ");
    }
}

int printNumbers (int total, int counter) {

    int middle = ((total + 1) / 2), initialCounter = counter;

    for (int k = 1; k <= total; k++) {

        printf("%3d ", (counter * counter));
        counter++;
    
    }

    return counter;
}