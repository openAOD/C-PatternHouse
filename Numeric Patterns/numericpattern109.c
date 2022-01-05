#include <stdio.h>

int main(){

    int n=5;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            printf("  ");
        }
        for(int j=n-i; j<n; j++){
            printf("%d ",j);
        }
        for(int j=n; j>=n-i; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
