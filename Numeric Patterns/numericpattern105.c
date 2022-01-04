#include <stdio.h>

int main(){

    int n=5;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            printf("  ");
        }
        for(int j=i; j>0; j--){
            printf("%d ",j);
        }
        for(int j=0; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
