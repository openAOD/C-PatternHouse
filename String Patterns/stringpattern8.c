#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "PatternHouse";
    int n = 4, index = strlen(str) - n - 1;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n; j++){
            printf("%c ", str[index--]);
            if(index == -1)
                index = strlen(str) - 1;
        }
        printf("\n");
    }
    return 0;
}

