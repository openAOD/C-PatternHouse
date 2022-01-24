
#include <stdio.h>

int main()
{  
   
   for (int i=4;i>=1;i--)
   {
       for (int j=i;j<=4;j++)
       {
           printf("%c",j+64);
       }
       printf("\n");
   }
   for (int i=2;i<=4;i++)
   {
       for (int j=i;j<=4;j++)
       {
           printf("%c",j+64);
       }
       printf("\n");
   }

    return 0;
}