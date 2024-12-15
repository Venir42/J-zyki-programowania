#include <stdio.h>

int main(){
    int n = 0;

    printf("Podaj dlugosc tablicy chyba o to chodzi w tym zadaniu: ");
    scanf("%d",&n);

    int tab[n];

    int *wsk = &tab[n];

    for(int i=0;i<n;i++){
        tab[i]=i+1;
        if(i==0){
            printf("Kolejne okienka tablicy tab to %d,",tab[i]);
        } else if(i+1==n){
            printf("%d.\n",tab[i]);
        } else {
            printf("%d,",tab[i]);
        }
    }


    return 0;
}