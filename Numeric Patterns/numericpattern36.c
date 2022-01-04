#include <stdio.h>

int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    k=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k=k+2;
        }
        printf("\n");
    }

    return 0;
}