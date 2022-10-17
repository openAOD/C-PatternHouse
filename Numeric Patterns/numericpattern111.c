#include <stdio.h>
#include <math.h>

int main(){

    int n=3;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            printf("  ");
        }
        int p=pow(2,i), sum=0;
        for(int j=0; j<p; j++){
            sum+=(k+(2*j));
        }
        for(int j=0; j<floor(p/2); j++){
            printf("%d ",k);
            k+=2;
        }
        if(sum>1)
            printf("%d ",sum);
        for(int j=p/2; j<p; j++){
            printf("%d ",k);
            k+=2;
        }

        printf("\n");
    }
}
