#include <iostream>
#include <cmath>
using namespace std; 
bool nwd (int a, int b)  // szuka nwd dwóch liczb aby sprawdzić czy są względem siebie pierwsze
{
    int tmp;
   	while (b != 0) 
	{
    	tmp = a % b;
        a = b;
		b = tmp;
    }
    if (a==1) return true;
   	else return false;   
}
bool walidacja(int m, int n)  // sprawdzane są w sposób hierarchiczny wszystkie warunki konieczne do poprawnego działania programu
{
	if (m>n)
	{
		if (((m%2==0) && (n%2==1)) || ((n%2==0) && (m%2==1)))
		{
			if (nwd(m, n) == true)	
			{
			 return true;
			}	
			else return false;
		}
		else return false;
	}
	else return false;	
}
int main() 
{
	int n,m,a,b,c;
	cout << "Program oblicza trojkaty pitagorejskie przy uzyciu wzoru z rozwiazania geometrycznego" << endl;
	cout << "Zachowaj nastepujace warunki: m>n, tylko jedna z podanych liczb moze byc parzysta, obie musza byc wzgledem siebie pierwsze" << endl << endl;
	cout << "Wprowadz zmienna m" << endl;
	cin >> m;
	cout << "Wprowadz zmienna n" << endl;
	cin >> n;
	while (walidacja(m, n) == false)      // sprawdzanie spelnienia warunkow wprowadzonych liczb w petli
	{
		cout << "Jeden badz wiecej warunkow nie zostalo spelnionych" << endl;
		cout << "Wprowadz zmienna m" << endl;
		cin >> m;
		cout << "Wprowadz zmienna n" << endl;
		cin >> n;
	}
	for(int i=1;i<=m;i++) // szukanie wszystkich trojek pitagorejskich i wypisywanie ich4
	
	{
        for(int j=1;j<=n;j++)
		{
			if (walidacja(i, j))
			{
				c = pow(i, 2) + pow(j, 2);
				a = pow(i, 2) - pow(j, 2);
				b = (2*i*j);
				cout << "a = " << a << " b = " << b << " c = " << c << endl;		
			}
		}
    }
}