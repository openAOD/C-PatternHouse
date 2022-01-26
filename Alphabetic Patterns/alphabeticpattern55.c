#include <stdio.h>

int main()
{
   int curr_char=4;
    for (int i=1;i<=5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (j%2!=0)                
            {char a = 65+(9*(j/2 +1)-curr_char+(j/2));     
            printf("%c ",a);}
            else
            {
                char a=65+(curr_char+5*j);
                  printf("%c ",a);}
        }
        curr_char--;
      printf("\n");
    }

    return 0;
}
