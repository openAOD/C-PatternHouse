
#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d", j);
            }
            else
            {
                printf("%d", 6 - j);
            }
        }

        printf("\n");
    }
    return 0;
}
