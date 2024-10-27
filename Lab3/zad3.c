#include <stdio.h>

int main(){
    int luno = 0;
    int lduo = 0;

    printf("Podaj dwie cyferki ze spacja: ");
    scanf("%d %d", &luno, &lduo);

    if(lduo>luno){
        printf("Wieszka z podanych cyferek to %d\n", lduo);
    } else {
        printf("Wieksza z podanych cyferek to %d\n", luno);
    }
}