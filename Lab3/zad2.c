#include <stdio.h>

int main(){
    int pliczba = 0;
    int dliczba = 0;

    printf("Podaj pierwsza liczbe/cyfre: ");
    scanf("%d", &pliczba);
    printf("Podaj druga liczbe/cyfre: ");
    scanf("%d", &dliczba);

    printf("Ich suma to : %d\n", pliczba + dliczba);
    printf("Ich odejmowanie to : %d\n", pliczba - dliczba);
    printf("Ich mnozenie to : %d\n", pliczba * dliczba);
    printf("Ich dzielenie to : %f\n", (float)pliczba / (float)dliczba);
    printf("Ich modulo to : %d\n", pliczba % dliczba);
}