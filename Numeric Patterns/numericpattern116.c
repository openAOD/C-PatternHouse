#include <stdio.h>

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=n; j>=n-i; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=n; i>=0; i--){
        for(int j=n; j>=n-i; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
