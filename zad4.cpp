#include <stdio.h>
#include <string.h>


int main(){
		
		
	char haslo[9],haslo_ver[9];		//deklaracja zmiennych
	
	
	scanf("%s", haslo);
	scanf("%s", haslo_ver);				//wprowadzenie przez u¿ytkownika has³a
	
	
	while(strlen(haslo)!=8 || strcmp(haslo,haslo_ver)){			//warunek czy has³a s¹ takie same i czy has³o zawiera 8 znaków
		
	
	
	if(strcmp(haslo,haslo_ver)){				//wyœwietlenie czy has³a s¹ takie same
		printf("hasla sie roznia");				
	}else{
		printf("hasla sa takie same");
	}
	
	
	printf("\n");
	
	
	 if(strlen(haslo)<8){							//wyœwietlenie czy has³o ma wiêcej/mniej ni¿ 8 znaków !(informacja dotyczy tylko pierwszego has³a)!
		printf("haslo ma mniej niz 8");
	}else if(strlen(haslo)>8){
		printf("haslo ma wiencej niz 8");
	}
	
	printf("\nsproboj ponownie \n\n");      		
	scanf("%s", haslo);
	scanf("%s", haslo_ver);
	}
	
	

	printf("\nhasla sa takie same \ndlugosc hasla wynosi 8 \ngratulacje!");					//wiadomoœæ w wypadku dobrze wprowadzonego has³a
	
	
	
	return 0;
}
