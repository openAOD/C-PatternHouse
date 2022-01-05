#include <stdio.h>

int main(){

    int n=5;
    int arr[n][n];
    int x=n, y=n;
    while(y>0){
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++)
                arr[i][j]=y;
        }
        x--; y--;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}
