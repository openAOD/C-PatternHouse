#include <stdio.h>

int main()
{
    int n,k=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            if(k>9)
            printf("%d ",k);
            else
            printf(" %d ",k);
            k=k+2;
        }
        printf("\n");
    }
    return 0;
}