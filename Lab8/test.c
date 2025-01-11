#include <stdio.h>
#include <ctype.h>

int power(int x){
    int wynik = 1;
    for(int i = x;i>0;i--){
        wynik = wynik * 2;
    }
    return wynik;
}


int main(){
    int wynik = power(1);

    printf("Wynik to %d ",wynik);
}