#include <stdio.h>

int main (){
    int a =  0;
    int b =  0;
    int c =  0;


    
    printf("Podaj liczbe 1: ");
    scanf("%d", &a);

    printf("Podaj liczbe 2: ");
    scanf("%d", &b);

    printf("Podaj liczbe 3: ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("Najwieksza z licztb to liczba numer 1 rowna : %d\n", a);
    } else if(b>a && b>c){
        printf("Najwieksza z licztb to liczba numer 2 rowna : %d\n", b);
    } else if(c>a && c>b){
        printf("Najwieksza z licztb to liczba numer 3 rowna : %d\n", c);
    } else {
        printf("Cos nie tak\n");
    }
}