#include <stdio.h>

int main()
{
    int n = 4, num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= 1; j--) {
            if(i >= j) {
                printf("%3d ", num * num);
                num++;
            }
            else
                printf("    ");
        }
        printf("\n");
    }
    return 0;
}