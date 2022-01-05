#include <stdio.h>

int main(){

    int n=5;

    for(int i=1; i<=n; i+=2){
        for(int j=0; j<n; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    for(int i=2; i<=n; i+=2){
        for(int j=0; j<n; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
