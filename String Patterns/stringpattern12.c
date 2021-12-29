#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "PatternHouse";
    int n = 5, index = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++)
            printf("  ");
            
        for(int k = 0; k < n - i; k++) {
            printf("%c ", str[index++]);
            if(index == strlen(str)) 
                index = 0;
        }
        printf("\n");
    }
    return 0;
}
