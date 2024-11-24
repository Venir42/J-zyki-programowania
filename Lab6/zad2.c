#include <stdio.h>

int ff1(int a, int b){
    if(a==b){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int a = 0;
    int b = 0;

    printf("\nPodaj dwie liczby po przecinku a ja sprawdze czy sa takie same : ");
    scanf("%d,%d", &a,&b);
    
    int wynik = ff1(a,b);
    
    if(wynik==0){
        printf("Podane liczby roznia sie diametralnie");
    }   else if(wynik==1)  {
        printf("Podane liczby to to samo");
    }
    printf("\n");
}