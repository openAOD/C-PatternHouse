
#include <stdio.h>

int main()
{
    int c = 1;
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", ch++);
            }
            else
            {
                printf("%d", c++);
            }
        }

        printf("\n");
    }

    return 0;
}