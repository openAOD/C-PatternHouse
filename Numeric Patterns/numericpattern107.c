#include <stdio.h>

int main(){
    int n=5;
    int i,j;
    int p=1, c=1;
    for(i=1;i<=n;i++){
        for (j=n;j>=i;j--){
            printf(" ");
        }
        p=1;
        printf("%d", p);
        while(c<i){
            printf("%d",p/=2);
            c--;
        }
        printf("\n");
    }
    return 0;
}
