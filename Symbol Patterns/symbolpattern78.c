#include <stdio.h>

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i % 2 == 0) {
                if(j % 2 != 0)
                    printf("X ");
                else 
                    printf("O ");
            }
            else {
                if(j % 2 != 0)
                    printf("O ");
                else 
                    printf("X ");
                }
        }
        printf("\n");
    }
    return 0;
}