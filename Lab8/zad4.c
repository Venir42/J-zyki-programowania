#include <stdio.h>

int tabla(int l,int arr[l]){
    int n = 0;
    int best = 0;
    // printf("%d...\n",arr[2]);
    for(int i=0;i<l;i++){
        if(arr[i]>arr[i+1] && arr[i]>n){
            n = arr[i];
            best = i;
            i = 0;
            // printf("%d.....%d\n",n, best);
        }
        // printf("konc if  .. %d\n", i);
    }
    printf("Najwieksza liczba to %d na pozycji %d teraz juz ma wartosc 0 :)\n",n,best+1);
    return arr[best] = 0;
}

int main(){
    int tab[8]={3,5,6,2,2,6,4};
    int dl = 8;

    tabla(dl,tab);

    for(int i = 0; i < dl-1; i++){
        if(i==dl-2){
            printf("%d\n", tab[dl-2]);
        } else {
            printf("%d,", tab[i]);
        }
    }
}