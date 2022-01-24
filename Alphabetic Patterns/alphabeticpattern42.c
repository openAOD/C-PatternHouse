#include <stdio.h>

int main()
{   
    int c=0,k=0;
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=(5-i);j++)
        {
            printf(" ");
        }
        for (int j=i;j<=(i+c);j++)
        {
            printf("%c",j+64);
        }
        for (int j=k;j>=i;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
        c++;
        k=k+2;
    }

    return 0;
}
