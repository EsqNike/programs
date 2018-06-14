#include <iostream>
#include <locale>

using namespace std;
int main() {


setlocale(LC_ALL, "polish"); // ustawienie pl znaków
	int menu;
	const float pi=3.14159;
		while (true)
	{
		cout << "\n\n Wybierz opcjê z menu \n 1.Oblicz pole kwadratu \n 2.Oblicz pole prostok¹ta \n 3.Oblicz pole ko³a \n 4.Zamknij program \n\n WprowadŸ wybór: ";
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
				cout << "\n Pole ko³a wynosi:" << a*a*pi;	
				break;
			}
			case 4:{
				return 0;
			}
		}
	}
	return 0;
}
