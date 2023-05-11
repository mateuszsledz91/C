#include <iostream>
#include <fstream>
#include <vector>


using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	
	

	int n=0;
	int p=0;
	int usless;
	int wi = 0;
	
	
	
	

	cin >> n;
	

 	
    vector<int> s;
    
    for(int i = 1; i <= n; i++){
        cin >> usless;
        cin >> wi;
        
        while(s.size()!=0 && s.back() > wi){
            s.pop_back();
        }
        if(s.size() == 0 || s.back() < wi)
        {
            s.push_back(wi);
			p++;
        }
    }


	ofstream plik;
	plik.open("123.txt");
    plik << p;






















return 0;
}


