#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "ABCDE";
    int len = strlen(str), j;

    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            if(i == len/2)
                printf("%c ", str[j]);
            else if(j == len/2)
                printf("%c ", str[i]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

