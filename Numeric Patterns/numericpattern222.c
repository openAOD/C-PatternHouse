
#include <stdio.h>

int main()
{
    for (int i=0;i<=5;i++)
    {
        for (int j=0;j<=i;j++)
        {
            if (j==0)
            {
                printf("%d",i);
            }
            else
            {
                printf("*");   
            }
        }
        printf("\n");
    }
    

    return 0;
}