#include <stdio.h>

int main()
{
    int n = 5;
    int a[] = {4, 3, 5, 1, 2};
    for(int i = 0; i < n; i++) {
        printf("[%d]", i + 1);
        for(int j = 0; j < a[i]; j++) 
            printf("# ");
        printf("\n");
    }
    return 0;
}