#include <stdio.h>
#include <string>

int main(){
 	const int m=8,n=8;			//deklaracja zmiennych
	int j=0,k=7,pom=2;
	char szachownica[m][n];
	
	szachownica[0][0]='W';		// przypisanie figur bia�ym
	szachownica[0][1]='S';
	szachownica[0][2]='G';
	szachownica[0][3]='H';
	szachownica[0][4]='K';
	szachownica[0][5]='G';
	szachownica[0][6]='S';
	szachownica[0][7]='W';
	
	for(int i=0;i<8;i++){			//przypisanie pionk�w i pustych p�l dla bia�ych
		szachownica[1][i]='P';	
		szachownica[2][i]='.';
		szachownica[3][i]='.';
	}
	
	
		
	for(int i=0;i<8;i++){							//przypisanie fig�r czarnym
		szachownica[4][i]=szachownica[3][i];
		szachownica[5][i]=szachownica[2][i];
		szachownica[6][i]=szachownica[1][i];
		szachownica[7][i]=szachownica[0][i];
	}



printf("   | A | B | C | D | E | F | G | H | \n");  		//wy�wietlenie poziomych oznacze� szachownicy
printf("------------------------------------ \n");
printf(" 1 | ");

	for(int i=0;i<64;i++){									//wy�wietlenie szachownicy oraz oznacze� pionowych
		printf("%c | ",szachownica[j][i]);
		
		if(i==k){
			if(i != 63){
			printf("\n %i | ", pom);
			}
			k=k+8;
			pom++;
		}
		
	}



	




	
	return 0;
}
