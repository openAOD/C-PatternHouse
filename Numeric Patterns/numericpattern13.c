#include <stdio.h>

int main()
{
    int n,k=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        k=i;
        for(int j=1;j<=n;j++)
        {
            printf("%d ",k);
            k=k+n;
        }
        printf("\n");
    }
    return 0;
}
