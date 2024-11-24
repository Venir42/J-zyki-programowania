#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;

    printf("Podaj liczbe a : ");
    scanf("%d", &a);
    printf("Podaj liczbe b : ");
    scanf("%d", &b);

    int wynik = 0;
    for(int i = b; i>=0 ; i--){
        wynik = a * a;
    }

    printf("A do potegi B wynosi: %d\n", wynik);
}