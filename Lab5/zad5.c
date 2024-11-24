#include <stdio.h>

int main(){
    int a;
    int i=0;
    int wynik = 0;

    printf("Podaj dlugosc tabeli : ");
    scanf("%d", &a);
    int tab1[a];

    for(i=0; i<a; i++){
        if(i==0){
            printf("\nCzas uzupełnic tabele\n");
        } else {
            printf("Podaj liczbe na pozycje %d w tabeli : ", i);
            scanf("%d", &tab1[i]);

            // printf("a %d\n", a);
            // printf("%d\n",i);
        }
    }

    for(i = 0; i<a; i++){
        tab1[i] = i;
    }

    for(i = 0; i<a; i++){
        wynik = tab1[i] * tab1[i];
        tab1[i] = wynik;
        printf("%d ", tab1[i]);
    }

    printf("\n");
}