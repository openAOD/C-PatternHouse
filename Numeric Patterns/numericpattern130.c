#include <stdio.h>

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("1 ");
        }
        for(int j=n; j>i; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
