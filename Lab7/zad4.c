#include <stdio.h>

int fiboo(int a, int b, int n, int i){
    if(n  == 0){
        return a/2;
    } else {
        printf("I,");
        return fiboo(a=b+i,b=a,n-1,i=a+b);
    }

}


int main(){
    int dl = 5;

    int wynik = fiboo(dl, 0, 1, 2);
    printf("\nPozycja w ciago %d fibonaszjego to wynosi : %d\n",dl, wynik);

}