#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "ARYA";
    int len = strlen(str), j;

    for(int i = 0; i < len; i++) {
        j = i + 1;
        printf("%.*s\n", j, str);
    }
    for(int i = len - 2; i >= 0; i--) {
        j = i + 1;
        printf("%.*s\n", j, str);
    }
    return 0;
}
