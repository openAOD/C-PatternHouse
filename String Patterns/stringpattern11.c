#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HOUSE";
    int index = 0, len = strlen(str);

    for(int i = 0; i < len; i++) {
        for(int j = len - 1; j >= i; j--)
            printf("  ");
            
        for(int k = 1; k <= i + 1; k++) 
            printf("%c ", str[len - k]);
        printf("\n");
    }
    return 0;
}

