
#include <stdio.h>

int main()
{

    int n = 3;
    for (int i = n; i >= -n; i--)
    {
        int k = abs(i);
        for (int j = k; j >= 0; j--)
            printf("%c ", j + 65);
        printf("\n");
    }
    return 0;
}
