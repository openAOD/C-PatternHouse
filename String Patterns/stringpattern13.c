#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "PatternHouse";
    int n = 5, index = 0;

    for(int i = 0; i <= n; i++) {
        for(int j = n; j > i; j--)
            printf("  ");
            
        for(int k = 1; k < 2* i; k++) {
            printf("%c ", str[index++]);
            if(index == strlen(str)) 
                index = 0;
        }
        printf("\n");
    }
    return 0;
}