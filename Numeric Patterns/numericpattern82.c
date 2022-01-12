#include <stdio.h>

int main()
{
    int c = 15;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            printf("   ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%3d", c);
            c--;
        }
        printf("\n");
    }

    return 0;
}
