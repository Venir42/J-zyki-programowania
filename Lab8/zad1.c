#include <stdio.h>
int glob = 5;

int fun(int a, int b){
    printf("Adresy podanych zmiennych to %p, %p\n",&a,&b);
    return 0;
}


int main(){
    int a = glob;
    // printf("Adres 1 %p adres 2 %p\n ", &glob, &a);
    fun(glob, a);
}