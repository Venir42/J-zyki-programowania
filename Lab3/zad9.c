#include <stdio.h>

int main(){
    int xa = 0;
    int xb = 0;
    int ya = 0;
    int yb = 0;
    int da = 0;
    int db = 0;

    printf("Podaj pare liczb calkowitych reprezetujaca wpolzedne wiezcholka prostokata : ");
    scanf("%d, %d", &xa, &ya);
    
    printf("Podaj 2 pare liczb calkowitych reprezetujaca wpolzedne wiezcholka prostokata : ");
    scanf("%d, %d", &xb, &yb);

        da = 6-4;
        db = yb - ya;
        printf("Dlugosc %d %d\n", da,db);

    printf("\n\n %d %d %d %d %d %d \n\n", xa,ya,xb,yb,da,db);

    // if(x1,y1,x2,y2>=0 || x1,y1,x2,y2<=0){
    // }
}