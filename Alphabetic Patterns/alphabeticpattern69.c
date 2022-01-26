#include <stdio.h>

int main()
{
   for(char i = 'E'; i >= 'A'; i--) {
        for(char j = 'A'; j <= 'E'; j++) {
            if(j < i)
                printf("%c ",i);
            else 
                 printf("%c ",j);
        }
        printf("\n");
    }

    return 0;
}