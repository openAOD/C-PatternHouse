#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HOUSE";
    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        for(int j = i; j > 0; j--)
            printf("  ");
        
        for(int k = 0; k < len - i; k++)
            printf("%c ", str[k]);
            
        printf("\n");
    }
    return 0;
}
