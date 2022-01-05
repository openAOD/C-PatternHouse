#include <stdio.h>

int main(){

    int n=4;

    int k=1;
    char ch='a';
    int dig=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(dig==1){
                printf("%d ",k++);
                if(k%10==0)
                    dig=0;
            }
            else{
                printf("%c ",ch++);
                if(ch=='f')
                    dig=1;
            }
        }
        printf("\n");
    }
}
