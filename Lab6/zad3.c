#include <stdio.h>

char function(char s[50], int i){
    for(int x=0;x<=i;x++){
        if(x==i){
            printf("Literą na pozycji %i jest : %c\n",i,s[i]);
        }
        if(s[x] == '\0'){
            printf("Za krótki ciąg znakow!!!!!!!!\n");
            break;
        };
    }
}


int main(){
    char s[50];
    int i = 0;


    printf("Podaj ciąg znakow : ");
    scanf("%s", s);    
    printf("Podaj pozycję z ktorej litere mam wyswietlic : ");
    scanf(" %d", &i);

    function(s,i);
}