#include <iostream>
using namespace std;
int main() {

	int a,b,sum_a,sum_b,i,j,reszta;
	bool warunek1, warunek2;
	cout << "Liczby skojarzone\n";
	cout << "a,b>1\n";
	do {
	cout << "Podaj a: ";
	cin >> a;
		if (a>1) warunek1=true;
	cout << "Podaj b: ";
	cin >> b;
		if (b>1) warunek2=true;
	} while ((warunek1 && warunek2) == false);
	
	reszta=1;
	for (i=1;i<a;i++) {
		reszta=a%i;
			if (reszta==0) sum_a=sum_a+i;
		reszta=1;
	}
	
	for (j=1;j<b;j++) {
		reszta=b%i;
			if (reszta==0) sum_b=sum_b+j;
		reszta=1;
	}
	cout << sum_a;
	cout << sum_b;
	warunek1=false;
	warunek2=false;
	sum_a++;
	if (sum_a==b) warunek1=true;
	sum_b++;
	if (sum_b==a) warunek2=true;
	if ((warunek1 && warunek2) == true) cout << "Liczby sa skojarzone"; 
	else cout << "Liczby nie sa skojarzone";	
	return 0;
	
	
}
