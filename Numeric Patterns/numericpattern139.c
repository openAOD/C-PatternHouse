#include <stdio.h>

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("0 ");
        }
        for(int j=1; j<=n-i; j++){
            printf("%d ",(2*i)+j);
        }
        printf("\n");
    }
}
