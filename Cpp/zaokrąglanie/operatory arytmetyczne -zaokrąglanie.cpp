#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
string strDecyzja="t";

while (strDecyzja=="t") {
	
float fliczba3;
cout << "Podaj liczbe (najpierw C, potem R i zobacz roznice): ";
cin >> fliczba3;
cout << "Twoja liczba" << fliczba3 <<"\n";
cout << "Wynik round (normalnie)" << round(fliczba3) <<"\n";
cout << "Wynik ceil (gora)" << ceil(fliczba3) <<"\n";
cout << "Wynik floor (dol)" << floor(fliczba3) <<"\n";



 //pokaz setprecission
 cout << "Twoja liczba setprecision(5)" << setprecision(5) << fliczba3 <<"\n";
 cout << "Twoja liczba setprecision(9)" << setprecision(9) << fliczba3 <<"\n";
 cout << fixed;
 cout << "Twoja liczba fixed setprecision(5)" << setprecision(5) << fliczba3 <<"\n";
 cout << "Twoja liczba fixed setprecision(9)" << setprecision(9) << fliczba3 <<"\n";
getch();
 cout << "5.4999 oraz 5.5000 zobacz roznice" <<"\n";
 cout << "Podajesz nowe liczby? (t / n)";
 cin >> strDecyzja;
}

	getch();	
	return 0;
}
