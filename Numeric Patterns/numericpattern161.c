#include <stdio.h>

int main(){

    int n=5;
    int k=1;
    int star=1;

    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            if(star==1){
                printf("* ");
                star=0;
            }
            else{
                printf("%d ",k++);
                star=1;
            }
        }
        printf("\n");
    }
}
