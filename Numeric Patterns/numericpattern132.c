#include <stdio.h>

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            printf("%d ",(2*j)-1);
        }
        for(int j=1; j<=i-1; j++){
            printf("%d ",(2*j)-1);
        }
        printf("\n");
    }
}
