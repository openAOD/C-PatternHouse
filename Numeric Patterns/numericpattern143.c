#include <stdio.h>

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("1 ");
        }
        for(int j=i; j<n-1; j++){
            printf("0 ");
        }
        printf("\n");
    }
}
