
#include <stdio.h>

int main()
{

    int c = 1;
    for (int i = 1; i <= 4; i++)
    {
        int p = 1;
        for (int j = 1; j <= c; j++)
        {
            if (j % 2 == 0)
                printf("*");
            else
                printf("%d", p++);
        }
        printf("\n");
        c += 2;
    }
    return 0;
}