#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <conio.h>
#include <cstdlib>

using namespace std;

void minmax(int tab[200][320]) {
	int min=255;
	int max=0;	
		for (int i=0; i<200; i++){
			for (int j=0; j<320; j++){
				if (tab[i][j] < min) {
					min = tab[i][j];
				}
				if (tab[i][j] > max) {
					max = tab[i][j];
				}	
			}
		}
	cout << "6.1" << endl;	
	cout << "Najjasniejszy piksel ma wartosc: " << max;
	cout << endl;
	cout << "Najciemniejszy piksel ma wartosc: " << min;
	cout << endl;
}

void symetria(int tab[200][320]) {
	int del=0;
		for (int i=0; i<200; i++){
			for (int j=0; j<320; j++){
				if (tab[i][j] != tab[i][319-j]) {
					del++;
					break;
				}	
			}
		}
	cout << "6.2" << endl;
	cout << "Liczba wierszy do usuniecia: " << del << endl;
}

void kontrasty(int tab[200][320]) {
	int licznik=0;
	int kon;
	bool check=false;
	
	
	for (int i=0; i<200; i++){
		for (int j=0; j<320; j++){
			
			if (i>0) {
				kon = abs(tab[i][j]-tab[i-1][j]);
					if (kon>128) check=true;
			}
			if (j>0) { 
				kon = abs(tab[i][j]-tab[i][j-1]);
					if (kon>128) check=true;
			}
			if (i<199) {
				kon = abs(tab[i][j]-tab[i+1][j]);
					if (kon>128) check=true;	
			}
			if (j<319) {
				kon = abs(tab[i][j]-tab[i][j+1]);
					if (kon>128) check=true;
			}
			if (check==true) 
				licznik++;
				check=false;
			}	
		}
	cout << "6.3" << endl;
	cout << "Liczba pikseli posiadajacych przynajmniej jeden kontrastujacy wynosi: " << licznik << endl;
}

void dlugosc(int tab[200][320]) {
	int * wyniki =new int[32000];
	int n=0;
	int dlugosc=1;
		for (int j=0; j<320; j++) {
			for (int i=0; i<200; i++){
				if (i>0) {
					if (tab[i][j]==tab[i-1][j]) { 
					dlugosc++;
					}
					else if ((tab[i][j]!=tab[i-1][j]) && dlugosc!=1) {
						wyniki[n]=dlugosc;
						n++;
						dlugosc=1;
					}
				}		
			}	
		}
		int tmp=1;
	for (int k=0;k<32000;k++) {
		if (wyniki[k]>tmp) tmp=wyniki[k];
	}
	cout << "6.4" << endl;
	cout << "Najdluzsza linia pionowa ma dlugosc: " << tmp << endl;
	delete [] wyniki;
}



int main() {
	
	fstream dane, wynik;
	dane.open("dane.txt",fstream::in);
	wynik.open("wynik.txt",fstream::out);
	int piksele[200][320];
	
	
	for (int i=0; i<200; i++){
		for (int j=0; j<320; j++){
				dane >> piksele[i][j];
		}
	}
	minmax(piksele);
	symetria(piksele);
	kontrasty(piksele);
	dlugosc(piksele);
	return 0;
}
