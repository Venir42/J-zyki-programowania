#include <stdio.h>

int ekuli(int a, int b){
    if(a==b){
        return a;
    } else if(a>b){
            return ekuli(a-b,b);
    } else if(a<b){
            return ekuli(a,b-a);
    } else {
        return 0;
    }
}

int main(){
    int a = 12;
    int b = 5;

    int wynik = ekuli(a,b);

    printf("NWD to  %d\n",wynik);
}