#include <iostream>
#include <locale>

using namespace std;
int main() {


setlocale(LC_ALL, "polish"); // ustawienie pl znak�w
	int menu;
	const float pi=3.14159;
		while (true)
	{
		cout << "\n\n Wybierz opcj� z menu \n 1.Oblicz pole kwadratu \n 2.Oblicz pole prostok�ta \n 3.Oblicz pole ko�a \n 4.Zamknij program \n\n Wprowad� wyb�r: ";
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
				cout << "\n Pole ko�a wynosi:" << a*a*pi;	
				break;
			}
			case 4:{
				return 0;
			}
		}
	}
	return 0;
}
