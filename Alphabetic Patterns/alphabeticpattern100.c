#include <stdio.h>

int main()
{
     for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
        
            if (j==i || 5-j+1 == i){
                char c = (char)(5 - j + 65);
                printf("%c ",c);
            }
            else {
               printf(" ");
            }
        }
       printf("\n");
    }

    return 0;
}