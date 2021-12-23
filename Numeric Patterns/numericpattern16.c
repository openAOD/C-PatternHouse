#include <stdio.h>

int main()
{
    int n,k=1,l=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        k=l;
        for(int j=1;j<=n;j++)
        {
            printf("%d ",k);
            k=k+2;
        }
        printf("\n");
        l=l+2;
    }
    return 0;
}
