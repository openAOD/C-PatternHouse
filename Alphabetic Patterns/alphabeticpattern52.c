#include <stdio.h>

int main()
{
    int max = 4;
    int current_char = 0;
    for (int i = 1; i <= max; i++)
    {
        for (int l = 1; l <= max - i; l++)
            printf("  ");
        for (int j = 1; j <= i; j++)
        {
            char a = 65 + current_char;
            printf("%c ", a);
        }
        current_char += 1;
        printf("\n");
    }

    for (int i = max - 1; i >= 1; i--)
    {
        for (int l = 1; l <= max - i; l++)
            printf("  ");
        for (int j = 1; j <= i; j++)
        {
            char a = 65 + current_char;
            printf("%c ", a);
        }
        current_char += 1;
        printf("\n");
    }

    return 0;
}