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
            if(i%2==0 || j%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
