#include <iostream>
using namespace std;

bool sprawdzanie_prostokata(int tab[8]) {
	bool war1=false,war2=false,war3=false,war4=false;
	
	if (tab[0]==tab[6]) war1=true;
	if (tab[1]==tab[3]) war2=true;
	if (tab[2]==tab[4]) war3=true;
	if (tab[5]==tab[7]) war4=true;
	
	if (war1&&war2&&war3&&war4) return true; else return false;
	
	
}

int main() {
	bool prostokat=false;
	int bok1=0, bok2=0, pole=0;
	char oznaczenia[4] = {'A', 'B', 'C', 'D'};
	int tab[8];
	
	cout << "Program sprawdzajacy czy figura o podanych wspolrzednych jest prostokatem i liczaca jego pole\n";
	do {
		
		for(int i=0, j=1, k=0;(i<=6 && j<=7 && k<=4);i=i+2, j=j+2, k++) {
	cout << "Podaj wspolrzedne wierzcholka " << oznaczenia[k] <<":\n";
	cout << "Wspolrzedna x: ";
	cin >> tab[i];
	cout << "Wspolrzedna y: ";
	cin >> tab[j];	
		}	
	prostokat=sprawdzanie_prostokata(tab);
	 	if(prostokat==false) cout<< "To nie jest prostokat, wprowadz poprawne dane!\n\n";
	 
	} while (prostokat!=true);
	cout << endl;
	
	bok1=tab[7]-tab[1];
	bok2=tab[2]-tab[0];
	pole=bok1*bok2;
	
	cout << "Pole twojego prostokata wynosi: " << pole;
	
	return 0;
}
