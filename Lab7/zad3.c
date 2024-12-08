#include <stdio.h>


int cal(int a,int n){
    if(n==0){
        return 0;
    } else if(n!=1){
        printf("%d,",a);
        return cal(a+1,n-1);
    } else {
        printf("%d",a);
        return 0;
    }
}

int main(){
    int ndl = 71;

    printf("Ciąg podanych liczb skutkuje w : ");
    cal(1,ndl);
    printf("\n");

}