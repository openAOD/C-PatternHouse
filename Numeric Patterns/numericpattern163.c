
#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        int c = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                printf("%d ", j * 2);
            else
            {
                printf("%d ", c);
                c += 2;
            }
        }
        printf("\n");
    }

    return 0;
}
