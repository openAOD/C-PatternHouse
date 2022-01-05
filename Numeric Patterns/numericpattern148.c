#include <stdio.h>

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%d ",i);
        }
        for(int j=i; j<n; j++){
            printf("* ");
        }
        printf("\n");
    }
}
