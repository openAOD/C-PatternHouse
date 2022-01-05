#include <stdio.h>

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=0; j<n/2; j++){
            printf("0 ");
        }
        for(int j=0; j<=n/2; j++){
            printf("1 ");
        }
        printf("\n");
    }
}
