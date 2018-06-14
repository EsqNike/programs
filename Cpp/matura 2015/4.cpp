#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void zerojeden(string tab[1000]) {
	int licznik=0;
	int zero=0;
	int jeden=0;
	
	for (int i=0; i<1000; i++) {
			for (int j=0;j<tab[i].length();j++) {
				if (tab[i][j]=='0') {
					zero++;
				}
				else {
					jeden++;
				}
			}
		if (zero>jeden) licznik++;
		zero=0;
		jeden=0;
		}
	cout << "4.1" << endl;
	cout << "Ilosc liczb skladajacych sie z przewazajacej ilosc zer: " << licznik << endl;
}

void podzielnosc(string tab[1000]) {
	int przez8=0;
	int przez2=0;
	for (int i=0; i<1000; i++) {
		if (tab[i][tab[i].length()-1] == '0') {
			przez2++;
			if (tab[i][tab[i].length()-2] == '0' && tab[i][tab[i].length()-3] == '0') przez8++;
		}
	}	
	cout << "4.2" << endl;
	cout << "Podzielne przez 8: " <<  przez8 << endl;
	cout << "Podzielne przez 2: " << przez2 << endl;
}

void max(string tab[1000]) {

	string max=tab[0];
	int wiersz=0;
	
	for (int i=0;i<1000;i++) {
		
		if (max.length()>tab[i].length()) continue;
		if (max.length()<tab[i].length()) {
			max=tab[i];
			wiersz=i+1;
			continue;
		}
		if (max.length()==tab[i].length()) {
			
			for (int j=0;j<max.length();j++) {
				if ((max[j]=='1' && tab[i][j]=='1') || (max[j]=='0' && tab[i][j]=='0')) continue;
				if (max[j]=='1' && tab[i][j]=='0') break;
				if (max[j]=='0' && tab[i][j]=='1') {
					max=tab[i];
					wiersz=i+1;
				}
			}		
		}
	}
	cout << "Numer wiersza liczby najwiekszej: ";
	cout << wiersz << endl;
	
}
		
void min(string tab[1000]) {

	string min=tab[0];
	int wiersz=0;
	
	for (int i=0;i<1000;i++) {
		
		if (min.length()>tab[i].length()) { 
			min=tab[i];
			wiersz=i+1;
		}
		if (min.length()<tab[i].length()) continue;
		if (min.length()==tab[i].length()) {
			
			for (int j=0;j<min.length();j++) {
				if ((min[j]=='1' && tab[i][j]=='1') || (min[j]=='0' && tab[i][j]=='0')) continue;
				if (min[j]=='1' && tab[i][j]=='0') {
					min=tab[i];
					wiersz=i+1;	
				}
				if (min[j]=='0' && tab[i][j]=='1') break;

				}
			}		
		}
	cout << "Numer wiersza liczby najmniejszej: ";
	cout << wiersz;	
}
	



int main() {
	
	fstream liczby, wyniki;
	
	liczby.open("liczby.txt", fstream::in);
	wyniki.open("wyniki4.txt", fstream::out);
	
	string bin[1000];
	
	for (int i=0; i<1000; i++) {
		liczby>>bin[i];
		}	
	
	
	zerojeden(bin);
	podzielnosc(bin);
	cout << "4_3" << endl;
	max(bin);
	min(bin);
	
}
