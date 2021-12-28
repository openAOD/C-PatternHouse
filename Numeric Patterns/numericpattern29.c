#include <stdio.h>

int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        l=k;
        for(j=1;j<=i;j++)
        {
            printf("%d ",l++);
        }
        k--;
        printf("\n");
    }

    return 0;
}