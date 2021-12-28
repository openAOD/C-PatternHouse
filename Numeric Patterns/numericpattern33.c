#include <stdio.h>

int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    k=1;
    for(i=1;i<=n;i++)
    {
        l=k;
        for(j=1;j<=i;j++)
        {
            printf("%d ",l);
            l=l+2;
        }
        printf("\n");
        k=k+2;
    }

    return 0;
}