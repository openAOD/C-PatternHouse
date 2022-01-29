#include <stdio.h>

int main()
{
    int size = 5;
    int top = 0;
    int bottom = size - 1;

    for (int i = 0; i < size; i++)
    {

        if (i == top || i == bottom) 
        {
            for (int j = 0; j < size; j++)
                printf("* ");
            printf("\n");
        }

        else if (i == top + 1)
        { 
            printf("*\n");
        }

        else if (i == size / 2)
        {
            for (int j = 0; j < size; j++)
            {
                if (j != 1)
                    printf("* ");
                else
                    printf("  ");
            }

            printf("\n");
        }

        else
        { 
            for (int j = 0; j < size; j++)
            {
                if (j == 0 || j == size - 1)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}