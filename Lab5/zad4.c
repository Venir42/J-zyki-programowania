#include <stdio.h>

int main(){
    int a = 0;
    int i;
    int wynik = 0;

    printf("Podaj liczbe : ");
    scanf("%d", &a);
    int tab1[a];

    for(i = 0; i<a; i++){
        tab1[i] = i;
    }

    for(i = 0; i<a; i++){
        wynik = tab1[i] * tab1[i];
        tab1[i] = wynik;
        printf("%d ", tab1[i]);
    }

    printf("\nTablica uzupełniona kwadratami kolejncyh liczb o dlugosci %d\n",a);
}