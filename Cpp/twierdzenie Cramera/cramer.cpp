#include <iostream>
using namespace std;

int main() {
	float a1=0,a2=0,b1=9,b2=0,c1=0,c2=0,W=0,Wx=0,Wy=0;		
	cout << "Program rozwiazuje uklad rownan postaci:\n";
	cout << "a1 * x + b1 * y = c1\n";
	cout << "a2 * x + b2 * y = c2\n";
	cout << "Podaj a1: ";
	cin >> a1;
	cout << "Podaj b1: ";
	cin >> b1;
	cout << "Podaj c1: ";
	cin >> c1;
	cout << "Podaj a2: ";
	cin >> a2;
	cout << "Podaj b2: ";
	cin >> b2;
	cout << "Podaj c2: ";
	cin >> c2;
	
	W= (a1*b2-(a2*b1));
	if (W == 0) cout << "Wyznacznik jest rowny 0";
	if (W != 0) {
		Wx=(c1*b2-(c2*b1)); 
		Wy=(a1*c2-(a2*c1));
		
	cout << "X wynosi: " << (Wx/W) << endl;
	cout << "Y wynosi: " << (Wy/W) << endl;
	}
	return 0;
}
