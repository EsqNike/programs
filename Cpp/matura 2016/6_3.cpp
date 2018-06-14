#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
	
	fstream dane, wynik;
	dane.open("dane_6_3.txt",fstream::in);
	wynik.open("wynik_6_3.txt",fstream::out);
	string slowo, zakodowane;
	int s,z,shift;
	int roznica[30];
	
	while (dane >> slowo && dane >> zakodowane) {
			s=slowo[0];
			z=zakodowane[0];
			if (s>z) {
				roznica[0]=(90-s)+(z-64);
			}
			else {
				roznica[0]=abs(z-s);
			}
			for (int i=1;i<slowo.length();i++) {
			s=slowo[i];
			z=zakodowane[i];
			if (s>z) {
				roznica[i]=(90-s)+(z-64);
			}
			else {
				roznica[i]=abs(z-s);
			}
			if (roznica[i]!=roznica[i-1]) {
				wynik << slowo << endl;
				break;
			}
		}
	}
}
	
	
	
	
	
	
	
	
	


