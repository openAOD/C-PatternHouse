#include <stdio.h>

int main()
{
    int c = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            printf("   ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%3d", c++);
        }
        printf("\n");
        c--;
    }

    return 0;
}