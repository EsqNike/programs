#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	
	fstream dane,wynik;
	dane.open("dane_6_2.txt",fstream::in);
	wynik.open("wynik_6_2.txt",fstream::out);
	int ascii;
	int przesuniecie;
	string wyraz;
	string nwyraz="";
	while (dane>>wyraz && dane>>przesuniecie) {
		for (int i=0;i<wyraz.length();i++) {
			int kod=przesuniecie%26;
			int ascii;
			ascii=wyraz[i];
			ascii=ascii-kod;
			if(ascii<65) {
				ascii=65-ascii;
				ascii=91-ascii;
			}
			nwyraz+=(char)ascii;	
		}	
		wynik << nwyraz << endl;
		nwyraz="";
	}
	return 0;
}
