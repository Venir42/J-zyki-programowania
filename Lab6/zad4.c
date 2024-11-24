#include <stdio.h>

int lenght=0;
char s[50];

int check(char arr[50]){
    for(int i=0;i<100;i++){
        lenght++;
        if(arr[i]== '\0'){
            break;
        }
    }
    return lenght;
}

int palindor(){
    lenght = check(s);
    for(int i=0;i<lenght;i++){
        for(int j=lenght;j>0;j--){
            if(s[i]!=s[j]){
                break;
            }
            if(i==j){
                printf("Podane slowo sie zgadza ogolnie\n");
            }
            // printf("Dziala niby %d = i, %d = j\n",i,j);
        }
    }
}

int main(){

    printf("Podaj slowko : ");
    scanf("%s", s);

    palindor();
    
}