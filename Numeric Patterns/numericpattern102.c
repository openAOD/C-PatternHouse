#include <stdio.h>

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=0; j<=n+i; j++){
            if(j<n-i){
                printf("  ");
            }
            else{
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}
