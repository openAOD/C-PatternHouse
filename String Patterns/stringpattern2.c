#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HOUSE";
    int len = strlen(str);
    
    for(int i = 0; i < len; i++) {
        for(int j = 1; j <= len; j++)
            printf("%c ", str[len - j]);
        printf("\n");
    }
    return 0;
}