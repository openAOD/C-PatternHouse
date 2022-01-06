#include <stdio.h>

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            if(j==n-i)
                printf("* ");
            else
                printf("%d ",j);
        }
        printf("\n");
    }
}
