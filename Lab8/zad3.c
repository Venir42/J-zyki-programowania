#include <stdio.h>

void mix(int  a, int b){
    printf("Przed wywołaniem %d, %d\n",a,b);
    int c = a;
    a = b;
    b = c;
    printf("Po wywołaniu %d, %d\n",a,b);
}

int main(){
    int n1 = 4;
    int n2 = 5;

    mix(n1,n2);

}