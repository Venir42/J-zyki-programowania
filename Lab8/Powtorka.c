#include <stdio.h>
#include <ctype.h>

int n = 0;

int power(int wynik,int x){
    for(int i = x;i>0;i--){
        wynik = wynik * 2;
    }
        printf(" ..%d..",wynik);
    return wynik;
}

void pr1(int arr[]){
    printf("\n");
    for(int i = 0;i<=n;i++){
        printf("Pozycja %d = %d\n",i,arr[i]);
    }
    printf("\n");
}

void pr2(int arr[]){
    printf("\n");
    int check = 0;
    int buff=0;

        for(int i = 0;i<=n;i++){
            if(arr[i]==0){
                printf("Na miejscu %d jest pusty wyraz uzupełnij go: ",i);
                while(getchar()!='\n'){fflush(stdin);}
                while(1){
                    if(scanf("%d",&buff) == 1 && buff!=0){
                        arr[i]=buff;
                        check++;
                        break;
                    } else {
                        printf("Podana liczba to nie liczba podaj liczbe ablo nie zero plz:");
                        while(getchar()!='\n');
                    }
                }
            }
        }

        if(check==0){
            printf("W tabeli nie ma wyrazów pustych\n");
        }

    printf("\n");
}

void pr3(int arr[]){
    printf("\n");
    int check = 0;
    int pozycja = 0;
    int end = 0;

    for(int i=0;i<=n;i++){
        if(arr[i]==0){
            check++;
        }
    }
    if(check!=0){
        printf("Uzupełnij najpierw tabelę uzywajac 2 pozycji\n");
    } else {
        printf("Podaj pozycję elementu który chciałbyś usunąć: ");
        
        while(1){
            if(scanf("%d",&pozycja)==1){
                break;
            } else {
                printf("Podaj prawdziwy numer:");
                while(getchar()!='\n');
            }
        }

        arr[pozycja]=0;
        check = 0;

            for(int i = 0;i<=n;i++){
                if(arr[i]==0){
                    arr[i]=arr[i+1];
                    check++;
                } else if(check!=0){
                    arr[i]=arr[i+1];
                }
            }
        arr[n]='\0';
        n--;
    }
    printf("\n");
}

void pr4(int arr[]){
    printf("\n");

    int sum = 0;
    for(int i = 0; i<=n; i++){
        sum = sum + arr[i];
    }
    printf("Suma wyrazów w tabeli wynosi : %d\n",sum);

    printf("\n");
}

void pr5(int arr[]){
    printf("\n");

    printf("Drzewo binarne:\n");
    
        int x = 1;
        int buff = 0;
        int wynik = 1;

        printf(" %d ",arr[i]);

    while(1){
        int y = power(wynik,x)+buff;
        for(int i = y;i>0;i--){
            if(arr[i]==arr[n]){
                break;
            }
            printf("%d",i);
            printf(" %d ",arr[i]);
            buff++;
        }
        x++;
        printf("\n");
    }

    printf("\n");
}

int main(){
    printf("Podaj długość tablicy: ");
    scanf("%d", &n);

    int proces = 6;

    int tab[100]

     = {34, 33, 94, 83, 99, 75, 86, 45, 37, 82, 10, 68,
     96, 80, 12 ,51, 70, 64 ,92, 6, 42, 89 ,25, 88, 61 ,36, 50, 81, 93, 98,
      41, 29, 72, 8, 32, 17, 60, 62, 71, 3, 20, 14, 76, 7, 43, 38, 65, 66,
       58, 78, 55, 77, 27, 24, 69, 53, 26, 23, 15, 73, 47, 30, 100, 95, 84,
        49, 19, 39, 2, 44 ,67, 40, 22, 4, 28, 79 ,52, 91 ,56 ,54, 63, 5, 97,
         35, 9, 21, 1 ,46 ,85 ,57 ,87 ,13 ,90, 11, 59, 18 ,48 ,31 ,74};
    
    if(n==0){
        proces = 1;
    }

    while(1){
        int check = 0;
        switch(proces){
            case 0 :
            printf("eskesdlads\n");
            break;
            case 1 :
                if(n==0){
                    printf("Kod błedu 1\n");
                    check = 3;
                    break;
                } else {
                    pr1(tab);
                }
                check++;
                proces = 6;
                break;
            case 2 :
                pr2(tab);
                check++;
                proces = 6;
                break;
            case 3 :
                pr3(tab);
                check++;
                proces = 6;
                break;
            case 4 :
                pr4(tab);
                check++;
                proces = 6;
                break;
            case 5 :
                pr5(tab);
                check++;
                proces = 6;
                break;
            default :
                if(check==1 || proces==6){
                    printf("Podaj co ma program zrobić :\n 1.Wypisać elementy tablicy\n 2.Sprawdźić wolne miejsca w tablicy i uzupełnić je\n 3.Usunąć podany element z tablicy\n 4.Zsumować całość tablicy i podać wynik\n 5.Wypisać drzewo binarne z elementów tablicy\n(type 0 to end)\n");
                    getchar();
                    scanf("%d", &proces);
                    check--;
                } else if(check==0 && proces!=6){
                    printf("\n\n\nBłędny wybór sproboj ponownie\n\n\n");
                    check--;
                } else if(check == 3){
                    break;
                }
        }
        
        if(proces==0){
            break;
        }
    }

}