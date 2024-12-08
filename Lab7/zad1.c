#include <stdio.h>

int sil(int n){
    if(n>0){
        int nout = n * sil(n-1);
        return nout;
    } else {    
        return 1;
    }
}

int main(){
    int nsil = 0;

    printf("Podaj liczbe n! :");
    scanf("%d", &nsil);

    int wynik = sil(nsil);
    printf("Wynik silni podanej liczby to : %d\n",nsil);
    printf("nsil = %d  wynik = %d \n",nsil,wynik);
}