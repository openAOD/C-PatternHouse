#include <stdio.h>

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            printf("%d ",j);
        }
        for(int j=i-1; j>=1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
