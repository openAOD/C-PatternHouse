#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HOUSE";
    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        for(int j = len - 1; j > i; j--)
            printf("  ");
        
        for(int k = 0; k <= i; k++)
            printf("%c ", str[k]);
            
        printf("\n");
    }
    return 0;
}
