#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HOUSE";
    int len = strlen(str);

    for(int i = len - 1; i >= 0; i--) {
        for(int j = 0; j <= i; j++)
            printf("%c ", str[j]);
        printf("\n");
    }
    return 0;
}
