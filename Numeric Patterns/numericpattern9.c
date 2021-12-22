#include <stdio.h>

int main()
{
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
        k=1;
        for(int j=1;j<=n;j++)
        {
            if(j%2==0)
            printf("%d ",i);
            else
            {
              printf("%d ",k);
              k++;
            }
        }
        printf("\n");
    }
    return 0;
}