#import <stdio.h>
#import <string.h>


typedef struct Towar{ 
char Nazwa[30];
float Cena;
int Ilosc;
	} Element; 
 
 
 
 
typedef struct magazyn{ 
Element dane;
magazyn *nastepny;
	} magazyn;




magazyn *Poczatek = NULL; 


void DodajNaPoczatek(magazyn *&poczatek, Element dane) {
 	magazyn *tmp; 
 	tmp = new magazyn; //(magayzyn*)malloc(sizeof(magazyn)); 
 	
 
 
 	tmp->dane = dane; 
 	tmp->nastepny = poczatek; 
 	poczatek = tmp; 

} 



void WyswietlListe(magazyn *poczatek) {
    magazyn *biezacy = poczatek;
    while (biezacy != NULL) {
        printf("Nazwa: %s", biezacy->dane.Nazwa);
        printf("  Cena: %.2f", biezacy->dane.Cena);
        printf("  Ilosc: %d", biezacy->dane.Ilosc);
        printf("\n");
        biezacy = biezacy->nastepny;
    }
}




void UsunPoNazwie(magazyn *&poczatek, char *nazwa) {
	int sumaIlosc = 0;
	float sumaCena = 0;
    magazyn *biezacy = poczatek;
    magazyn *poprzednik = NULL;
    int licznik = 0;
    while (biezacy != NULL) {
        if (strcmp(biezacy->dane.Nazwa, nazwa) == 0) {
            if (poprzednik == NULL) {
                poczatek = biezacy->nastepny;
            } else {
                poprzednik->nastepny = biezacy->nastepny;
            }
            printf("Usunieto element: %s, %f, %d\n", biezacy->dane.Nazwa, biezacy->dane.Cena, biezacy->dane.Ilosc);
            sumaIlosc += biezacy->dane.Ilosc;
            sumaCena += biezacy->dane.Cena; 
            magazyn *tmp = biezacy;
            biezacy = biezacy->nastepny;
            delete tmp;
            licznik++;
        } else {
            poprzednik = biezacy;
            biezacy = biezacy->nastepny;
        }
    }
    if (licznik == 0) {
        printf("Nie znaleziono elementow o nazwie: %s\n", nazwa);
    } else {
        printf("Usuniêto %d elementów o nazwie: %s\n", licznik, nazwa);
        printf("Laczna cena usunietych: %f, Laczna ilosc usunietych: %i\n", sumaCena, sumaIlosc);
    }
}
 






int main(){

	// Tworzenie kilku pierwszych elementów listy
    Element element1 = {"Aparat", 29.99, 10};
    Element element2 = {"Telewizor", 149.21, 5};
    Element element3 = {"Telefon", 99.69, 20};
    
    
    
    
    
    
    // Dodawanie kilku pierwszych elementów do listy
    DodajNaPoczatek(Poczatek, element1);
    DodajNaPoczatek(Poczatek, element2);
    DodajNaPoczatek(Poczatek, element3);
    
    
    
    char nazwa[30];
	float cena;
	int ilosc;


while(1) {
    printf("\n1: dodaj element do listy\n");
    printf("2: usun element do listy\n");
    printf("3: wyswietl listê\n");
    printf("napisanie czegokolwiek innego niz powyzsze opcje skutkuje wyjsciem!!!!\n");
    printf("wybierz co chcesz zrobic: ");

    int numer;
    scanf("%i", &numer);
    printf("\n");

    if(numer == 1){													//dodawanie nowych elementów
    	Element nowyElement;
    printf("podaj nazwe produktu: ");
    scanf("%s", nowyElement.Nazwa);
    printf("podaj cene produktu: ");
    scanf("%f", &nowyElement.Cena);
    printf("podaj ilosc produktu: ");
    scanf("%d", &nowyElement.Ilosc);

    magazyn *nowy = new magazyn;
    nowy->dane = nowyElement;
    nowy->nastepny = Poczatek;
    Poczatek = nowy;
    	
    	
    	
    	
    	
    	
    }else if(numer == 2){											//usuwanie po nazwie
        printf("usun wszystkie elementy o podanej nazwie: ");
        scanf("%s", nazwa);
        UsunPoNazwie(Poczatek,nazwa);
        
    }else if(numer == 3){											//wyœwietlanie
        WyswietlListe(Poczatek);
    }else{
	break;
	        continue; // powrót do pocz¹tku pêtli while
    }
}

   
	
	 
    
    
    
    
    
    
	
	
	
	return 0;
}
