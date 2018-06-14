#include <iostream>
#include <math.h>

using namespace std;
//wzor funkcji to -2x^2+20x-42
//wzor calki dla tej funkcji to -2x^3/3+10x^2-42x
//funkcja liczaca calke dla danego punktu
double calka(double x) {return ((-2*pow (x, 3))/3+(10*pow  (x, 2))-42*x);}

int main() {
	int x1=0,x2=0;
	int mz1=3,mz2=7; //miejsca zerowe funkcji kwadratowej 
	double wynik=0, cmz1=calka(mz1), cmz2=calka(mz2); //globalne powolanie zmiennych wyniku i stalych wartosci calek dla miejsc zerowych funkcji kwadratowej
		
	cout << "Witaj w programie liczacym pole obszaru funkcji kwadratowej w zakresie przy uzyciu calek oznaczonych\n";
	cout << "Program oblicza pole dla funkcji kwadratowej o wzorze: -2x^2+20x-42\n";
	do {
	cout << "Podaj punkty na osi x ograniczajace przedział w kolejnosci od mniejszego do wiekszego\n";
	cout << "Pierwszy punkt: ";
	cin >> x1;
	cout << "Drugi punkt: ";
	cin >> x2;
	cout << endl;
	if (x1>x2) cout << "Warunek kolejnosci wpisywania nie zostal spelniony, podaj dane jeszcze raz\n\n";
	} while (x1>x2);
	
	double cx1=calka(x1);
	double cx2=calka(x2); //wartosci calki dla podanych punktow
	
	if ((x1<mz1 && x2<mz1) || (x1>mz2 && x2>mz2)) wynik = fabs(cx2-cx1);
	else if (x1<mz1 && x2>mz2) wynik = (cmz2-cmz1)+fabs(cmz1-cx1)+fabs(cx2-cmz2);
	else if (x1<mz1 && x2>mz1) wynik = (cx2-cmz1)+fabs(cmz1-cx1);
	else if (x1<mz2 && x2>mz2) wynik = (cmz2-cx1)+fabs(cx2-cmz2);
	else wynik = cx2-cx1; // rozpatrzenie wszelkich mozliwosci polozenia podanych punktow wzgledem osi i wykonanie odpowiednich obliczen
	
	cout << "Pole obszaru wynosi: ";
	cout << wynik;
	return 0;
}