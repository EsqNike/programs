#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void zmiana_systemu(fstream &wy,int liczba, int podstawa) {
		int r, reszty[500];
		int dlugosc=0;
		char literka;
		while (liczba!=0) {
			r=liczba%podstawa;
			liczba=liczba/podstawa;
			reszty[dlugosc]=r;
			dlugosc++;
			}
	for (int i=dlugosc-1;i>=0;i--) {
		if (reszty[i]>=10) {
			for (int k=10;k<=35;k++) {
				if (reszty[i]==k) {
					char literka=k+55;
					wy<<literka;
					} 
				}
			}
		else {
			wy<<reszty[i];
		}
	}
	wy<<endl;
}
int main() {
	fstream we, wy;
	int liczba, podstawa;
	we.open("argumenty.txt",fstream::in); 
	wy.open("wyniki.txt",fstream::out); 
	while(we>>liczba && we>>podstawa) {
		zmiana_systemu(wy,liczba,podstawa);
}
	we.close();
	wy.close();
	
	return 0;
}
