#include <stdio.h>

int main()
{
    for (int i=1;i<=4;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i=3;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}