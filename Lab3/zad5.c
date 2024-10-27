#include <stdio.h>

int main(){
    char asc;

    printf("Wpisz znak z kwlawiatury a ja sprawdze czy to litereczka: ");
    scanf("%c", &asc);


    if(65<=(int)asc && (int)asc <=90){    
        printf("Duza litera '%c' odpowiada liczbie : %d w ASCII TABLE\n", asc, (int)asc);
    } else if (97<=(int)asc && (int)asc<=122){
        printf("Mala litera '%c' odpowiada liczbie : %d w ASCII TABLE\n", asc, (int)asc);
    } else {
        printf("Podany znak nie jest literka ale odpowiada on wartosci %d\n", asc);
    }
}