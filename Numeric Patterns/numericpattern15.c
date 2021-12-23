#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        k=i;
        for(int j=1;j<=n;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}
