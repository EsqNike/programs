#include <iostream>
#include <locale>

using namespace std;
int main() {


setlocale(LC_ALL, "polish"); // ustawienie pl znaków
	int menu;
	const float pi=3.14159;
	const float pier3=1.73205;
	
		while (true)
	{
		cout << "\n\n Wybierz opcjê z menu \n 1.Oblicz pole kwadratu \n 2.Oblicz pole prostok¹ta \n 3.Oblicz pole ko³a \n 4.Oblicz pole trapezu \n 5.Oblicz pole graniastos³upa czworok¹tnego prawid³owego \n 6.Oblicz pole ostros³upa prawid³owego trójk¹tnego \n 7.Zamknij program \n\n WprowadŸ wybór: ";
		cin >> menu;
		switch (menu)
		{
			case 1:{
				int a;
				cout << "\n Podaj d³ugoœæ boku kwadratu: ";
				cin >> a;
				cout << "\n Pole kwadratu wynosi: " << a*a;
				break;
			}
			case 2:{
				int a,b;
				cout << "\n Podaj d³ugoœæ d³u¿szego boku prostok¹ta: ";
				cin >> a;
				cout << "\n Podaj d³ugoœæ krótszego boku prostok¹ta: ";
				cin >> b;
				cout << "\n Pole prostok¹ta wynosi: " << a*b;
				break;
			}
			case 3:{
				int a;
				cout << "\n Podaj d³ugoœæ promienia ko³a: ";
				cin >> a;
				cout << "\n Pole ko³a wynosi: " << a*a*pi;	
				break;
			}
			case 4:{
				int a,b,h;
				cout << "\n Podaj d³ugoœæ pierwszej podstawy: ";
				cin >> a;
				cout << "\n Podaj d³ugoœæ drugiej podstawy: ";
				cin >> b;
				cout << "\n Podaj wysokoœæ trapezu: ";
				cin >> h;
				cout << "\n Pole trapezu wynosi: " << (a+b)*h/2;
				break;
			}
			case 5:{
				int a,h;
				cout << "\n Podaj d³ugoœæ boku podstawy: ";
				cin >> a;
				cout << "\n Podaj wysokoœæ graniastos³upa: ";
				cin >> h;
				cout << "\n Pole graniastos³upa prawid³owego czworok¹tnego wynosi: " << 2*a*a+4*(a*h);
				break;
			}
			case 6:{
				int a;
				float h;
				cout << "\n Podaj d³ugoœæ boku podstawy: ";
				cin >> a;
				cout << "\n Podaj wysokoœæ trójk¹ta œciany bocznej: ";
				 cin >> h;
				cout << "Pole ostros³upa prawid³owego trójk¹tnego wynosi: " << (a*a*pier3)/4+3*a*h/2;
				break;
			}
			case 7:	return 0;	
		}
	}
	return 0;
}
	

