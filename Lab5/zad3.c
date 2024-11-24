#include <stdio.h>

int main(){
    int a = 1;
    int aw = a;
    int b = 0;
    int c = 0;

    printf("Podaj liczbe a : ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    while(aw <= b){
        aw = aw * a;
        c++;
    }
    printf("Aby a bylo wieszke od b jego wykladnik potegi musi byc rowny: %d\n",c);
}