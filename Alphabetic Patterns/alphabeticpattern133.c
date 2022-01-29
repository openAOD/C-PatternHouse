
#include <stdio.h>

int main()
{

    int height = 7;
    int size = 4;
    int ch1 = 0;
    int ch2 = size / 2;

    for (int i = 0; i < height; i++)
    {

        if (i <= height / 2)
        {
            char chr = 'A' + i;
            for (int j = 0; j < size; j++)
            {

                if (j >= ch1)
                    printf("%c ", chr++);
                else
                    printf("  ");
            }

            ch1++;
            printf("\n");
        }

        else
        {
            for (int j = 0; j < size; j++)
            {
                char chr = 'A' + j;
                if (j >= ch2)
                    printf("%c ", chr++);
                else
                    printf("  ");
            }

            ch2--;
            printf("\n");
        }
    }

    return 0;
}