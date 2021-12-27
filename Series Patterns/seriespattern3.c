#include <stdio.h>

int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++){
        int t = i*(i+1)/2;
        printf("%d ", t);
    }

    return 0;
}