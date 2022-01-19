
#include <stdio.h>

int main()
{   
    int k=1;
    int c=1;
    int ch='A';
    for (int i=1;i<=5;i++)
    {   
        for (int j=1;j<=(5-i);j++)
        {
            printf(" ");
        }
        for (int j=1;j<=k;j++)
        {
            if (i%2==0)
            {
                printf("%c",ch++);
            }
            else
            {
                printf("%d",c++);
            }
            if (c>9)
            c=1;
            
        }
        k=k+2;
        printf("\n");
        
    }

    return 0;
}