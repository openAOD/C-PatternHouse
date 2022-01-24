
#include <stdio.h>

int main()
{
    int cur_char = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
            printf("%d ", 6 - i);
        for (int k = i; k < 5; k++)
        {
            char a = 65 + cur_char;
            printf("%c ", a);
        }
        cur_char++;
        printf("\n");
    }

    return 0;
}