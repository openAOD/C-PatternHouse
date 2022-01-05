#include <stdio.h>

int main(){

    int n=5;

    int k=1;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            printf("  ");
        }
        for(int j=1; j<i; j++){
            printf("%d ",j);
        }
        for(int j=i; j>=1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
