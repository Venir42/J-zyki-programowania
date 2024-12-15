#include <stdio.h>

void  fun(int a, int b, int c){
    int arr[4]={a,b,c};
    int n = 0;
    int poz = 0;
    for(int i=0;i<3;i++){
        if(arr[i]>arr[i+1] && arr[i]>n){
            n=arr[i];
            poz=i;
            i=0;
            // printf("%d\n",poz);
        }
    }
    switch (poz){
        case 0:
            if(b>c){
                printf("Liczby kolejno przyjmuja wartosc a,b,c %d,%d,%d\n",a,b,c);
            } else {
                printf("Liczby kolejno przyjmuja wartosc a,c,b %d,%d,%d\n",a,c,b);
            }
            break;
        case 1:
            if(a>c){
                printf("Liczby kolejno przyjmuja wartosc b,a,c %d,%d,%d\n",b,a,c);
            } else {
                printf("Liczby kolejno przyjmuja wartosc b,c,a %d,%d,%d\n",b,c,a);
            }
            break;
        case 2:
            if(a>b){
                printf("Liczby kolejno przyjmuja wartosc c,a,b %d,%d,%d\n",c,a,b);
            } else {
                printf("Liczby kolejno przyjmuja wartosc c,b,a %d,%d,%d\n",c,b,a);
            }
            break;
    }
}

int main(){
    int n1 = 0, n2 = 0, n3 = 0;
        
    printf("Podaj liczby : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    fun(n1,n2,n3);
}