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

    int printStar, updateValue, reverseUpdate, counter;

    for (int i = 1; i <= totalLines; i++) {

        printStar = (totalLines - i);
        updateValue = 1;
        reverseUpdate = ((2 * i) - 1);
        counter = i;

        for (int j = 1; j <= printStar; j++) {

            printf(" * ");
        }

        for (int k = 1; k <= ((2 * i) - 1); k++) {

            printf ("%2d ", counter);

            if (counter == reverseUpdate) {

                updateValue = - updateValue;
            }

            counter += updateValue;
        }

        for (int l = printStar; l >= 1; l--) {

            printf(" * ");
        }

        printf("\n");
    }
}