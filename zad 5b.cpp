#include <stdio.h>
#include <math.h>

union kontener{							//deklaracja unii
	short int s;			
	double d;
}k;


int main(){
	double pom;
	
	
	
for(int i=1;i<=100;i++){				//obliczanie pierwiastka kwadratowego
	pom=sqrt(i);
	if(pom-int(pom)==0){
		k.s = pom;
	}else{
		k.d = pom;
	}
	printf("%.15f\n",k.d);				//wypisanie z precyzj¹ 15 znaków
}		
	
	
	
	
	return 0;
}
