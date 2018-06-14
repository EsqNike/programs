#include <iostream>
#include <cmath> //sqrt
#include <cstdlib>
#include <locale> //setlocale
#include <conio.h> //getch()

//zmieni� aby 20 tys by�o
 
using namespace std;

int main() {
	setlocale(LC_ALL, "polish");
	int i,t=1;
	bool *tablica;
	cout << "Program wypisuje liczby pierwsze z przedzia�u < 2 ; t >\n";
	//wczytanie t, powtarzamy operacj� wczytania, �� uzytkownik poda t z zakresu od 2 do 19999
	while ((t<2) or (t>=20000)) {
	cout <<"1 < t < 20000. Podaj liczb� naturaln� t: ";
	cin >> t;
	}
	//obliczanie wartosci pierwiastka kwadratowego z t funkcj� sqrt
	float pierwt = sqrt(t);
	 //utworzenie tablicy
	 //tablica mo�e zawiera� 1 = PRAWD� lub 0 = FA�SZ
	 //liczby pierwsze b�dziemy oznacza� prawd�
	tablica = new bool [t+1]; //deklaracja
	for (i=2; i<=t; i++) { //zaczynamy od 2, zobacz opis sita Eratostenesa
	tablica [i] = 0; //wype�nienie tablicy tj. fa�szem
	}
	//wykreslamy liczby, kt�re nie s� pierwsze poprzez oznaczenie ich 1 = prawda
	for (i=2; i<=pierwt; i++) { //licznik p�tli zwi�kszamy do wartosci <== pierwiastka kwadratowego
			if (!tablica[i]) {
				for (int j=2*i; j<=t; j+=i) { //zaczynamy wykresla� 1 = PRAWD�
					tablica[j]=1; //wpisz 1=PRAWDA, czyli oznacz jako liczb� kt�ra nie jest pierwsza
			}
		}
	}
	//wypisz liczby pierwsze
	cout << "Liczby pierwsze to: \n";
	for (i=2; i<=t; i++) {
		if(!tablica[i]) {
			cout << " " << i;
		}
	}
	getch();
	return (0);
}

