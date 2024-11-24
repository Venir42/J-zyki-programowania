#include <stdio.h>

int kwx = 0;
int kw(int x){
    kwx = x * x;
    return kwx;
}

int main(){
    int wynik = 0;
    int n = 0;

    printf("\nPodaj liczbę: ");
    scanf("%d", &n);

    for(int i = n; i>=0; i--){
        wynik = wynik + kw(i);
    }

    printf("\nPotegujac kazda kolejna liczbe i tworzac z tego sume wychodzi : %d\n", wynik);
}