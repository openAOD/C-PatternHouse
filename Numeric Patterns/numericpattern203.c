#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", i + 64);
            }
            else
            {
                printf("%d", i);
            }
        }
        printf("\n");
    }

    return 0;
}