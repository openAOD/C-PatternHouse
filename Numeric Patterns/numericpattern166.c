
#include <stdio.h>

int main()
{

    for (int i = 1; i <= 7; i += 2)
    {
        int c = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}