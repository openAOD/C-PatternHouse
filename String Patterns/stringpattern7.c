#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "PatternHouse";
    int len = strlen(str), n = 4, index = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            printf("%c ", str[index++]);
            if(index == len)
                break;   
        }
        printf("\n");
    }
    return 0;
}