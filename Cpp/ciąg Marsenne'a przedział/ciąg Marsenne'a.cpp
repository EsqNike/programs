#include <iostream>
#include <cmath>
#include <cstdlib>
#include <locale> //setlocale
#include <conio.h> //getch()
using namespace std;



bool Pierwsza(int bob) {	
bool wynik=true ;
int iloscpodz=0;
   
     if (bob!=1)
     {
          for(int i=2;i<=bob;i++)
          {
              if ((bob % i)==0) //i jest podzielnikiem rob
              {
                iloscpodz++;
                if (iloscpodz>2)   //pierwsza ma tylko dwa
                   {
                      wynik=false;
                      break;
                   }
              }
          }
     }
     else {
     	wynik=false;
	 }
     
     return wynik;     
}


int main() 
{
	setlocale(LC_ALL, "polish"); //ustawienie pl-znak�w
	cout << "Program wy�wietlaj�cy liczby pierwsze z ci�gu Marsenne'a z przedzia�u i narzucon� minimaln� r�nic� mi�dzy pocz�tkiem a ko�cem ci�gu \n\n";
	int p,k,menu;
	int ciag [15];
		do {
		cout << "Podaj pocz�tek ci�gu (liczb� naturaln� nie wi�ksz� ni� 10000) \n";
		cin >> p;	
		} while ((p<1) or (p>10000));
		do {
		cout << "Podaj koniec ci�gu (liczb� naturaln� nie wi�ksz� ni� 20000) \n";	
		cin >> k;
		} while ((k<1) or (k>20000));
		cout << endl;
	if (k-p>=2000) 
	{
	
		for (int i=1,t; i<=15 ; i++) 
		{
			ciag [i] = (pow(2, i ))-1;
			if ((ciag [i]>=p)&&(ciag [i]<=k)) 
			{
    			if (Pierwsza(ciag [i]))
				{
					cout << ciag [i] << endl;
				}
			}
		}	
		     		cout << "\n1. Powt�rz \n2. Wyjd� \nWprowad� wyb�r: \n";
					cin >> menu;
					switch(menu) 
					{
							case 1:
							{
							system("cls");
							return main();
							break;
							}
							case 2:
							{
							return 0;
							break;
							}				
					}		
	}
	else {
		cout << "Wprowadzony zakres nie spe�nia wymaga� minimalnej r�nicy mi�dzy pocz�tkiem, a ko�cem zakresu ci�gu (2000) \nNaci�nij dowolny klawisz aby spr�bowa� jeszcze raz... \n\n";
		getch();
		system("cls");
		return main();		
	}
			return 0;
}


	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

