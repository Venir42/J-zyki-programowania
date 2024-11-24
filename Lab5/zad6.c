#include <stdio.h>

int main(){
    // int x1 = 0, x2 = 0, y1=0, y2=0;
    
    // printf("Podaj po przecinku 2 wartosci 1 lub 0 : ");
    // scanf("%d,%d", &x1, &x2);
    // printf("Podaj po przecinku 2 wartosci 1 lub 0 : ");
    // scanf("%d,%d", &y1, &y2);
    
    char tab[4][4];
    tab[1][1] = "|";
    tab[1][2] = "-";



    // printf("%d, %d, %d, %d\n",x1,x2,y1,y2);
    printf("%d, %d\n",tab[1][1], tab[1][2]);
}