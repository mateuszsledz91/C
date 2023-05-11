#include <stdio.h>
#include <math.h>


	struct punkt{					//stworzenie struktury punkt
		int x;
		int y;
	};

	struct trojkat{					//struktura trójk¹t
		punkt a;
		punkt b;
		punkt c;
		int pole;
	};
	
	
	
	
int main(){
	float a,b,c,p;					//zmienne pomocnicze
	trojkat t;
	
	t.a.x = 0;						//przypisanie punktów
	t.a.y = 0;
	t.b.x = 4;
	t.b.y = 0;
	t.c.x = 0;
	t.c.y = 3;
	
	a = sqrt(pow(t.b.x - t.a.x,2)+pow(t.b.y - t.a.y,2));			//obliczenie odleg³oœci miêdzy punktami
	b = sqrt(pow(t.c.x - t.b.x,2)+pow(t.c.y - t.b.y,2));
	c = sqrt(pow(t.a.x - t.c.x,2)+pow(t.a.y - t.c.y,2));
	p = (a+b+c)/2;
	
	t.pole = sqrt(p*(p-a)*(p-b)*(p-c));						//obliczenie pola trójk¹ta na podstawie wzroy Herona
	
	
	
	
	printf("Pole trojkata wynosi: %d", t.pole);					//wypisanie wyniku
	
	
	
	return 0;
}
