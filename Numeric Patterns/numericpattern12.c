#include <stdio.h>

int main()
{
    int n,k=1,l;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        k=i;
        l=2*n-i+1;
        for(int j=1;j<=n;j++)
        {
            if(j%2!=0)
            {
            printf("%d ",k);
            k=k+2*n;
            }
            else
            {
            printf("%d ",l);
            l=l+2*n;
            }
        }
        printf("\n");
    }
    return 0;
}
