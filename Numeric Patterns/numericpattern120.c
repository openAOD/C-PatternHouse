#include <stdio.h>

int main(){

    int n=5;

    for(int i=1; i<n; i+=2){
        for(int j=1; j<=i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    for(int i=n; i>0; i-=2){
        for(int j=1; j<=i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
