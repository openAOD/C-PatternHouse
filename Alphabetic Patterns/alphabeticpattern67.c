
#include <stdio.h>

int main()
{
    int size = 5;
    char prt = 'E';
    int chk = 0;

    for (int i = 1; i < size + 1; i++)
    {
        char ch = 'A';
        for (int j = 1; j < size + 1; j++)
        {
            if (j >= size + 1 - chk)
                printf("%c ", prt);
            else
                printf("%c ", ch++);
        }
        prt--;
        chk++;
        printf("\n");
    }

    return 0;
}