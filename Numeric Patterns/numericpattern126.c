#include <stdio.h>

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            printf("%d ",j);
        }
        for(int j=0; j<i-1; j++){
            printf("%d ",n);
        }
        printf("\n");
    }
}
