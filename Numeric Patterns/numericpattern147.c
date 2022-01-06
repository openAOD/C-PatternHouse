#include <stdio.h>

int main(){

    int n=5;

    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%d ",n-i+1);
        }
        for(int j=i; j<n; j++){
            printf("%c ",char(ch+i-1));
        }
        printf("\n");
    }
}
