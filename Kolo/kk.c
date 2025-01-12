#include <stdio.h>

int n = 0;
int prw1 = 0;

void prw(int arr[]){
    printf("\n");
    if(n==0){
        printf("\n\n   Zbyt krótka tabela\n\n");
        prw1++;
    } else {  
        for(int i = 0;i<=n;i++){
            printf("%d. Pozycja tabeli jest %d\n",i,arr[i]);
        }
    }
    printf("\n");
}

void prd(int arr[]){
    printf("\n");
    int check = 0;
    char buff=0;
    int ascq = 7;

        for(int i = 0;i<=n;i++){
            if(arr[i]==0){
                if(ascq==6){
                    printf("\n\n  błąd sproboj ponownie");
                }
                while(1){
                    if(ascq==5){
                        break;
                    }
                    
                printf("Na miejscu %d jest pusty wyraz uzupełnij go: ",i);
                while(getchar()!='\n'){fflush(stdin);}
                    ascq = 6;
                    scanf("%c",&buff);
                    if(buff<=9 && buff>0 && ascq!=0){
                        printf("\n\ntutaj\n\n");
                        arr[i]=buff;
                        check++;
                        break;
                    } else {
                        printf("Podany znak nie zalicza sie do przedziału liczbowego czy dodać kod ASCII jemu odpowiadający TAK(1)/NIE(0): ");
                        while(ascq==6){
                            while(getchar()!='\n'){fflush(stdin);}
                            if(scanf("%d",&ascq)!=1 && ascq!=0){
                                printf("\n\n    Podaj 1 lub 0\n\n");
                            } else if(ascq==1) {
                                arr[i]=buff;
                                check++;
                                ascq=5;
                                break;
                            } else if(ascq==0){
                                break;
                            }
                        }
                    }
                }
            }
        }

        if(check==0){
            printf("W tabeli nie ma wyrazów pustych\n");
        }
    printf("\n");
}

void prdd(int arr[]){
    printf("\n");
    int check = 0;
    char buff=0;

        for(int i = 0;i<=n;i++){
            if(arr[i]==0){
                printf("Na miejscu %d jest pusty wyraz uzupełnij go: ",i);
                while(getchar()!='\n'){fflush(stdin);}
                while(1){
                    if(scanf("%c",&buff) == 1 && buff!=0){
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

void pru(int arr[]){
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
        printf("Podaj pozycję elementu który chciałbyś usunąć(powyzej %d aby anulować akcję): ",n);
        
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

int prs(int arr[]){
    printf("\n");
    
    int wynik = 0;

    for(int i = 0;i<=n;i++){
        wynik = wynik + (arr[i]*arr[i]);
    }

    if(wynik == 0){
        return 0;
    } else {
        return wynik;
    }

    printf("\n");
}

void prt(int arr[]){
    printf("\n");

    int kol = 0;

    printf("Podaj ilość kolumn : ");
    while(1){
        if(scanf("%d",&kol) == 1 && kol!=0){
            break;
        } else {
            printf("Podana liczba to nie liczba podaj liczbe ablo nie zero plz:");
            while(getchar()!='\n');
        }
    }

    for(int i = 0; i <= n; i++){
        if(i%kol==0){
            printf("\n");
        }
        printf(" %d ",arr[i]);
    }

    printf("\n\n");
}

void prtt(int arr[]){
    printf("\n");

    int wer = 0;

    printf("Podaj ilość kolumn : ");
    while(1){
        if(scanf("%d",&wer) == 1 && wer!=0){
            break;
        } else {
            printf("Podana liczba to nie liczba podaj liczbe ablo nie zero plz:");
            while(getchar()!='\n');
        }
    }

    int pos = n/wer +1;
    printf("\n\npos = = %d",pos);
    
    int a = 0;
    while(a<n){
        for(int i = 0;i>=pos;i++){
            printf(" %d ",arr[i+pos-1]);
            if(i==pos){
                printf("\n");
            }
            a++;
        }
    }

    printf("\n\n");
}

int main(){
    char zad = 'r';

    printf("Podaj długość tablicy : ");
    scanf("%d",&n);
    
    int tab[20] = {34, 33, 0, 83, 99, 75, 86, 45, 37, 82, 10, 68, 96, 80, 12 ,51, 70, 64 ,92, 6};

    printf("Podaj który proces powinien przebiedz: \n 1. e aby zakończyć działanie programu\n 2. w aby wypisać elementy tablicy\n 3. d aby srawdzic wolne miejsca\n 4. D aby zrobic to samo co powyzej z checkiem bez ascii\n 5. u aby usunąć wyraz\n 6. s aby zsumować kwadraty wyrazów tabeli\n 7. t aby wypisac podane kolumny\n 8. T aby wypisac liczbe wierszy\n");
    getchar();
    scanf("%c",&zad);

    while(1){
        if(prw1==1){
            return 0;
        }

        switch(zad){
            case 'e':
                return 0;
            case 'w':
                prw(tab);
                zad = 'r';
                break;
            case 'd':
                prd(tab);
                zad = 'r';
                break;
            case 'D':
                prdd(tab);
                zad = 'r';
                break;
            case 'u':
                pru(tab);
                zad = 'r';
                break;
            case 's':
                int check = prs(tab);
                if(check==0){
                    printf("Suma wyrazów wynosiła by 0 poniewaz tabela jest pusta uzupełnij ją pozycją 2");
                } else {
                    printf("Suma = %d",check);
                }
                printf("\n");
                zad = 'r';
                break;
            case 't':
                prt(tab);
                zad = 'r';
                break;
            case 'T':
                prtt(tab);
                zad = 'r';
                break;
            default:
                if(zad!='r'){
                    printf("\n\n   Błędny znak  \n   Spróbuj ponownie  \n\n");
                }
                zad = 'r';
                printf("Podaj który proces powinien przebiedz: \n 1. e aby zakończyć działanie programu\n 2. w aby wypisać elementy tablicy\n 3. d aby srawdzic wolne miejsca\n 4. D aby zrobic to samo co powyzej z checkiem bez ascii\n 5. u aby usunąć wyraz\n 6. s aby zsumować kwadraty wyrazów tabeli\n 7. t aby wypisac podane kolumny\n 8. T aby wypisac liczbe wierszy\n");
                getchar();
                scanf("%c",&zad);
                break;
        }
    }
}