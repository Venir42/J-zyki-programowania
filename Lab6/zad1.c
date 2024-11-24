#include <stdio.h>

int mnozenie(int a, int b){
    int wynik = a * b;
    return wynik;
}
double dzielenie(double a, double b){
    double wynik = (double)a / (double)b;
    return (double)wynik;
}
int dodawanie(int a, int b){
    int wynik = a + b;
    return wynik;
}
int odejmowanie(int a, int b){
    int wynik = a - b;
    return wynik;
}

int main(){
    int a=0;
    int b=0;
    double wynik=0;
    char polecenie;

    printf("\nPodaj dwie liczby po przecinku : ");
    scanf("%d,%d", &a, &b);
    getchar();
    printf("\nPodaj znak działania jakie chcesz wykonać: ");
    scanf("%c", &polecenie);

    switch(polecenie){
        case '*':
            wynik = mnozenie(a,b);
            printf("Mnozenie podanych liczb daje : %d\n", (int)wynik);
            break;
        case '/':
            wynik = dzielenie((double)a,(double)b);
            printf("Dzielenie podanych liczb daje : %f\n", (double)wynik);
            break;
        case '+':
            wynik = dodawanie(a,b);
            printf("Dodawanie podanych liczb daje : %d\n", (int)wynik);
            break;
        case '-':
            wynik = odejmowanie(a,b);
            printf("Odejmowanie podanych liczb daje : %d\n", (int)wynik);
            break;
    }
}