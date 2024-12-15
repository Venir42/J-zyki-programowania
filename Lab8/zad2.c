#include <stdio.h>

int main(){
    int tab[11];

    for(int i=0; tab[i]=='\0'; i++){
        // tab[i]= i+1;
        printf("Podaj %d liczbę : ",i);
        scanf("%d", &tab[i]);
    }

    // int i = 0;
    // while(tab[i]!='\0'){
    //     if(i==9){
    //         printf("%d\n", tab[9]);
    //     } else {
    //         printf("%d,", tab[i]);
    //     }
    //     i++;
    //     printf("...%d...\n",i);
    // }
    int i = 0;
    
    // for(i=0; tab[i]=='\0';i++){
    //     if(i==9){
    //         printf("%d\n", tab[9]);
    //     } else {
    //         printf("%d,", tab[i]);
    //     }
    //     printf("Dziala\n");
    // }

    printf("Podane liczby to : ");
    
    for(i=0;i<10;i++){
        if(i==9){
            printf("%d\n", tab[9]);
        } else {
            printf("%d,", tab[i]);
        }
    }
}