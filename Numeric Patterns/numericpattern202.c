
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
                printf("%c", j + 64);
            }
        }
        printf("\n");
    }

    return 0;
}