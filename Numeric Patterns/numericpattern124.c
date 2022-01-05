#include <stdio.h>

int main(){

    int n=5;

    int k=1;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=1; j<=n; j++){
                printf("%d ",j);
            }
        }
        else{
            for(int j=n; j>0; j--){
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}
