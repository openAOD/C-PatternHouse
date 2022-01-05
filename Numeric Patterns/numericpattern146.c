#include <stdio.h>

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=n-i-1; j>0; j--){
            printf("%d ",j);
        }
        for(int j=0; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
