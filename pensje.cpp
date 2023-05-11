#include <iostream>
#include <fstream>

using namespace std;

const int maxn = 1000005;

int n;
int przelozony[maxn], pensja[maxn];
int uzyte[maxn];
int ss[maxn];
int queue[maxn], q=0, p=0;
int ile_podwladnych[maxn];
int podwladny[maxn];









void policz(){
	for(int i=1;i<=n;i++){
		ss[przelozony[i]]++;   
	}
	for(int i=1;i<=n;i++){
		if(ss[i] == 0){
			queue[q++] = i;    
		}
	}
	
	while(q > p){
		int teraz = queue[p++];
		int szef = przelozony[teraz];
		if(pensja[teraz] == 0){
			if(--ss[szef] > 0){
				queue[q++] = szef;
			}
			ile_podwladnych[szef] += ile_podwladnych[teraz] +1;
		}
	}
}


void uzyte_a(){
	for(int i=1;i<=n;i++){
		if(pensja[i] != 0){
			uzyte[pensja[i]] = i;
		}else{
			if(podwladny[przelozony[i]] == 0 ){
				podwladny[przelozony[i]] = i;
			}else{
				podwladny[przelozony[i]] = -1;
			}
		}
	}
}



int main(){
	ios_base::sync_with_stdio(false);
	
	ifstream plik;
	plik.open("123.txt");
	
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> przelozony[i] >> pensja[i];
		
		if(przelozony[i] == i){
			pensja[i] = n;
		}
		
		
		
	}

	
	
	policz();
	uzyte_a();
	
	int i=0;
	int wolni = 0, mozliwe = 0;
	
	while(i < n){
		while(i < n && uzyte[i+1] == 0){
			i++;
			wolni++;
			mozliwe++;
		}
	while(i < n && uzyte[i+1] !=0){
		i++;
		int akt = uzyte[i];
		int v = i;
		wolni -= ile_podwladnych[akt];
		
		if(wolni == 0){
			while(mozliwe-- && podwladny[akt] > 0){
				while(uzyte[v] > 0){
					v--;
				}
			akt = podwladny[akt];
			pensja[akt] = v;
			uzyte[v] = akt;
			}
			mozliwe = 0;
		}
		
		if(ile_podwladnych[akt] != 0){
			mozliwe = 0;
			}	
		}
	}
	
	
	
	
	for(int i =1;i<=n;i++ ){
		cout << pensja[i] << endl;
	}
	
	
	
	
	

	
	return 0;
}
