#include <iostream>
#include <cmath> //sqrt
#include <cstdlib>
#include <locale> //setlocale
#include <conio.h> //getch()

//zmieniæ aby 20 tys by³o
 
using namespace std;

int main() {
	setlocale(LC_ALL, "polish");
	int i,t=1;
	bool *tablica;
	cout << "Program wypisuje liczby pierwsze z przedzia³u < 2 ; t >\n";
	//wczytanie t, powtarzamy operacjê wczytania, ¹¿ uzytkownik poda t z zakresu od 2 do 19999
	while ((t<2) or (t>=20000)) {
	cout <<"1 < t < 20000. Podaj liczbê naturaln¹ t: ";
	cin >> t;
	}
	//obliczanie wartosci pierwiastka kwadratowego z t funkcj¹ sqrt
	float pierwt = sqrt(t);
	 //utworzenie tablicy
	 //tablica mo¿e zawieraæ 1 = PRAWDÊ lub 0 = FA£SZ
	 //liczby pierwsze bêdziemy oznaczaæ prawd¹
	tablica = new bool [t+1]; //deklaracja
	for (i=2; i<=t; i++) { //zaczynamy od 2, zobacz opis sita Eratostenesa
	tablica [i] = 0; //wype³nienie tablicy tj. fa³szem
	}
	//wykreslamy liczby, które nie s¹ pierwsze poprzez oznaczenie ich 1 = prawda
	for (i=2; i<=pierwt; i++) { //licznik pêtli zwiêkszamy do wartosci <== pierwiastka kwadratowego
			if (!tablica[i]) {
				for (int j=2*i; j<=t; j+=i) { //zaczynamy wykreslaæ 1 = PRAWD¥
					tablica[j]=1; //wpisz 1=PRAWDA, czyli oznacz jako liczbê która nie jest pierwsza
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

