
#include <stdio.h>

int main()
{
    int c = 1;
    int m[5][5] = {0};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            m[j][4 - i] = c;
            c++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j])
            {
                printf("%3d", m[i][j]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}