#include <stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=2;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k=k+2;
        }
        printf("\n");
    }

    return 0;
}
