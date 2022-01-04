#include <stdio.h>

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=n-i; j<=n; j++){
            printf("%d ",j);
        }
        for(int j=0; j<n-i-1; j++){
            printf("%d ",n);
        }
        printf("\n");
    }
}
