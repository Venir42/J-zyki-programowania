#include <stdio.h>

int main(){
    int x = 10;
    int y = 8;
    int tab[x+1][y+1];

    //wspolzedne
    int x1 = 1,x2 = 1,y1 = 1, y2 = 1;

    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            // printf("(%d,%d)",j,i);
            if(j==0||j==x-1){
                printf("|");
            } else if(i==0 || i==y-1){
                printf("-");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    int a = 0;
    while(a == 0){
        printf("Podaj wzpolzedne pileczki od (1,1) do (%d,%d): ",x-2,y-2);
        scanf("%d,%d",&x1,&y1);
        if(x1!=1 || x1>x-2 && y1!=1 || y1>x-2){
            a = 1;
        }

    }

    tab[x1][y1];
}