#include <stdio.h>

int main(){

    int n=5;

    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ",k++);
            if(k==9)
                k=1;
        }
        printf("\n");
    }
}
