#include <stdio.h>

int main(){

    int n=5;

    for(int i=1; i<n+1; i++){
        for(int j=0; j<n-i; j++){
            printf("  ");
        }
        for(int j=0; j<(2*i)-1; j++){
            printf("%d ",n-i+1);
        }
        printf("\n");
    }
}
