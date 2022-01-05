#include <stdio.h>

int main(){

    int n=5;

    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            printf("0 ");
        }
        printf("\n");
    }
    for(int i=0; i<=n/2; i++){
        for(int j=0; j<n; j++){
            printf("1 ");
        }
        printf("\n");
    }
}
