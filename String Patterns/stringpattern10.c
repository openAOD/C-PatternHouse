#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "PatternHouse";
    int n = 5, index = 0, len = strlen(str);

    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j >= i; j--)
            printf("  ");
            
        for(int k = 0; k <= i; k++) {
            printf("%c ", str[index++]);
            if(index == len)
                index = 0;
        }
        printf("\n");
    }
    return 0;
}
