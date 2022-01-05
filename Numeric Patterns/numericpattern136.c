#include <stdio.h>

void decToBinary(int n){
    int binaryNum[32];

    int i = 0;
    while(n>0){
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d",binaryNum[j]);
}

int main(){

    int n=3;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            decToBinary(k++);
            printf(" ");
        }
        printf("\n");
    }
}
