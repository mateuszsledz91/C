#include <stdio.h>
#include <string.h>


int main(){
		
		
	char haslo[9],haslo_ver[9];		//deklaracja zmiennych
	
	
	scanf("%s", haslo);
	scanf("%s", haslo_ver);				//wprowadzenie przez u�ytkownika has�a
	
	
	while(strlen(haslo)!=8 || strcmp(haslo,haslo_ver)){			//warunek czy has�a s� takie same i czy has�o zawiera 8 znak�w
		
	
	
	if(strcmp(haslo,haslo_ver)){				//wy�wietlenie czy has�a s� takie same
		printf("hasla sie roznia");				
	}else{
		printf("hasla sa takie same");
	}
	
	
	printf("\n");
	
	
	 if(strlen(haslo)<8){							//wy�wietlenie czy has�o ma wi�cej/mniej ni� 8 znak�w !(informacja dotyczy tylko pierwszego has�a)!
		printf("haslo ma mniej niz 8");
	}else if(strlen(haslo)>8){
		printf("haslo ma wiencej niz 8");
	}
	
	printf("\nsproboj ponownie \n\n");      		
	scanf("%s", haslo);
	scanf("%s", haslo_ver);
	}
	
	

	printf("\nhasla sa takie same \ndlugosc hasla wynosi 8 \ngratulacje!");					//wiadomo�� w wypadku dobrze wprowadzonego has�a
	
	
	
	return 0;
}
