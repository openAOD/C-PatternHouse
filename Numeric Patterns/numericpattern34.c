#include <stdio.h>

int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    k=0;
    for(i=1;i<=n;i++)
    {
        k=k+i;
        l=k;
        for(j=1;j<=i;j++)
        {
            printf("%d ",l--);
        }
        printf("\n");
    }

    return 0;
}