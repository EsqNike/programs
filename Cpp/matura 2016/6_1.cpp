#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	
	fstream wynik,dane;
	dane.open("dane_6_1.txt",fstream::in);
	wynik.open("wynik_6_1.txt",fstream::out);
	int przesuniecie=(107%26);
	string wyraz;
	string nwyraz="";
	while (dane>>wyraz) {
		
		for (int i=0;i<wyraz.length();i++) {
			int ascii;
			ascii=wyraz[i];
			ascii=ascii+przesuniecie;
			if(ascii>90) {
				ascii=ascii-90;
				ascii=65+ascii;
			}
			nwyraz+=(char)ascii;
		}	
		wynik << nwyraz << endl;
		nwyraz="";
	}
	
	return 0;
}
