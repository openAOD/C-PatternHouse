
#include <stdio.h>

int main()
{
    int cur_char = 4;
    for (int i = 0; i < 5; i++)
    {
        int inc = 0;
        for (int j = i; j < i + 5; j++)
        {
            inc = j;
            if (inc > cur_char)
                inc = inc - cur_char - 1;
            char a = 65 + inc;
            printf("%c ", a);
        }
        printf("\n");
    }

    return 0;
}