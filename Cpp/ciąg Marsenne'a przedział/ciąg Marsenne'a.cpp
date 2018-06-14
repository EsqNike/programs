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
	setlocale(LC_ALL, "polish"); //ustawienie pl-znaków
	cout << "Program wyœwietlaj¹cy liczby pierwsze z ci¹gu Marsenne'a z przedzia³u i narzucon¹ minimaln¹ ró¿nic¹ miêdzy pocz¹tkiem a koñcem ci¹gu \n\n";
	int p,k,menu;
	int ciag [15];
		do {
		cout << "Podaj pocz¹tek ci¹gu (liczbê naturaln¹ nie wiêksz¹ ni¿ 10000) \n";
		cin >> p;	
		} while ((p<1) or (p>10000));
		do {
		cout << "Podaj koniec ci¹gu (liczbê naturaln¹ nie wiêksz¹ ni¿ 20000) \n";	
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
		     		cout << "\n1. Powtórz \n2. WyjdŸ \nWprowadŸ wybór: \n";
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
		cout << "Wprowadzony zakres nie spe³nia wymagañ minimalnej ró¿nicy miêdzy pocz¹tkiem, a koñcem zakresu ci¹gu (2000) \nNaciœnij dowolny klawisz aby spróbowaæ jeszcze raz... \n\n";
		getch();
		system("cls");
		return main();		
	}
			return 0;
}


	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

