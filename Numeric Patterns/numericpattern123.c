#include <stdio.h>

int main(){

    int n=3;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1; j++){
            printf("  ");
        }
        for(int j=n-i; j<=n; j++){
            printf("%d ",k);
        }
        printf("\n");
        k++;
    }
    for(int i=n; i>=0; i--){
        for(int j=0; j<=n-i-1; j++){
            printf("  ");
        }
        for(int j=n-i; j<=n; j++){
            printf("%d ",k);
        }
        printf("\n");
        k++;
    }
}
