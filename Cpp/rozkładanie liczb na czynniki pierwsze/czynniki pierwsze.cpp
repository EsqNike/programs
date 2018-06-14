#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main() {
	//blok deklaracji
	bool decyzja;
	char koniec;
	int liczba,tablica[15],i,dz,reszta;
	
	
do {
	cout << "Program rozklada lczbe zlozona na czynniki pierwsze \n";
	cout << "Dopuszczalny zakres [2 ; 1 000 000]" << endl;
	cout << "Podaj liczbe:";
	cin >> liczba;
	cout << endl;
	if (liczba > 1 and liczba < 1000001) {
		i=0;
		do {
			reszta=1;
			decyzja=false;
			dz=2;
				do {
				reszta = liczba % dz;
				if (reszta==0) {
				tablica[i]=dz;
				liczba=liczba/dz;
				decyzja=true;	
				}	
				dz++;
			}while (decyzja != true);
				
				
		cout << tablica[i] << " ";
		i++;
	}while (liczba != 1);
	
	} else {
		cout << "Liczba poza zakresem \n";
	}
	//czy uruchomic ponowne wprowadzenie liczby
	decyzja=false;
	cout << "\nAby zakonczyc dzialannie programu wpisz znak t.\nInny znak- kontynuacja i wprowadzenie kolejnej liczby\n";
	koniec = getche();
	//printf ("Wprowadziles znak o kodzie %i",koniec);endl;
	if (koniec=='t') {
		decyzja = true;
	}
	
} while (decyzja != true);
return 0;
}
