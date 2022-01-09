#include <stdio.h>

int main()
{
    int c = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("*");
            }
            else
            {

                printf("%c", c + 64);
                c++;
            }
        }

        printf("\n");
    }

    return 0;
}