#include <stdio.h>

int main()
{
    int n,i,j,k,l,m,p;
    scanf("%d",&n);
    l=0;
    for(i=1;i<=n;i++)
    {
        l=0;
        m=n-1;
        for(k=1;k<i;k++)
        {
            l=l+m;
            m--;
        }
        p=m+1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",i+l);
            l=l-p;
            p++;
        }
        printf("\n");
    }

    return 0;
}