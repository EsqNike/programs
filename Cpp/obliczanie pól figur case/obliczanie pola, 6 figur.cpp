#include <iostream>
#include <locale>

using namespace std;
int main() {


setlocale(LC_ALL, "polish"); // ustawienie pl znak�w
	int menu;
	const float pi=3.14159;
	const float pier3=1.73205;
	
		while (true)
	{
		cout << "\n\n Wybierz opcj� z menu \n 1.Oblicz pole kwadratu \n 2.Oblicz pole prostok�ta \n 3.Oblicz pole ko�a \n 4.Oblicz pole trapezu \n 5.Oblicz pole graniastos�upa czworok�tnego prawid�owego \n 6.Oblicz pole ostros�upa prawid�owego tr�jk�tnego \n 7.Zamknij program \n\n Wprowad� wyb�r: ";
		cin >> menu;
		switch (menu)
		{
			case 1:{
				int a;
				cout << "\n Podaj d�ugo�� boku kwadratu: ";
				cin >> a;
				cout << "\n Pole kwadratu wynosi: " << a*a;
				break;
			}
			case 2:{
				int a,b;
				cout << "\n Podaj d�ugo�� d�u�szego boku prostok�ta: ";
				cin >> a;
				cout << "\n Podaj d�ugo�� kr�tszego boku prostok�ta: ";
				cin >> b;
				cout << "\n Pole prostok�ta wynosi: " << a*b;
				break;
			}
			case 3:{
				int a;
				cout << "\n Podaj d�ugo�� promienia ko�a: ";
				cin >> a;
				cout << "\n Pole ko�a wynosi: " << a*a*pi;	
				break;
			}
			case 4:{
				int a,b,h;
				cout << "\n Podaj d�ugo�� pierwszej podstawy: ";
				cin >> a;
				cout << "\n Podaj d�ugo�� drugiej podstawy: ";
				cin >> b;
				cout << "\n Podaj wysoko�� trapezu: ";
				cin >> h;
				cout << "\n Pole trapezu wynosi: " << (a+b)*h/2;
				break;
			}
			case 5:{
				int a,h;
				cout << "\n Podaj d�ugo�� boku podstawy: ";
				cin >> a;
				cout << "\n Podaj wysoko�� graniastos�upa: ";
				cin >> h;
				cout << "\n Pole graniastos�upa prawid�owego czworok�tnego wynosi: " << 2*a*a+4*(a*h);
				break;
			}
			case 6:{
				int a;
				float h;
				cout << "\n Podaj d�ugo�� boku podstawy: ";
				cin >> a;
				cout << "\n Podaj wysoko�� tr�jk�ta �ciany bocznej: ";
				 cin >> h;
				cout << "Pole ostros�upa prawid�owego tr�jk�tnego wynosi: " << (a*a*pier3)/4+3*a*h/2;
				break;
			}
			case 7:	return 0;	
		}
	}
	return 0;
}
	

