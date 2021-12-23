#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        k=i;
        for(int j=n;j>=1;j--)
        {
            if(k>9)
            printf("%d ",k);
            else
            printf(" %d ",k);
            k=k+i;
        }
        printf("\n");
    }
    return 0;
}