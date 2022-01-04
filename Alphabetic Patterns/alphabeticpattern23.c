#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) 
            printf("  ");
        
        for(int k = 0; k <= i; k++)
            printf("%c ", i + 65);
            
        printf("\n");
    }
    return 0;
}