#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ctime>

#define MAXN 100000

using namespace std;

struct slowo{
  string obc;	//obce slowo
  string pol;	//polskie tlumaczenie
  int byl;		//0-slowo jeszcze nie uzyte lub z blednymi odpowiedziami
  				//1-slowo poprawnie odgadniete
};

slowo tab[MAXN];	//tablica slow odczytanych z pliku z danymi
int n;				//rzeczywista ilosc elementow wczytanych do tablicy;
					//ilosc elementow bedzie zawsze od 1 do n, element 0 bedzie niewykorzystany
string plik;					


void czyscbufor(){
  cin.clear();
  cin.sync();
}

string PL(string txt)
//kodowanie polskich znaków
{
    string result="";
    for(int i=0;i<txt.length(); i++ ) 
    switch(txt[i])
    {
    case '¹': result += (char)( 0xa5 ); break;
    case 'æ': result += (char)( 0x86 ); break;
    case 'ê': result += (char)( 0xa9 ); break;
    case '³': result += (char)( 0x88 ); break;
    case 'ñ': result += (char)( 0xe4 ); break;
    case 'ó': result += (char)( 0xa2 ); break;
    case 'œ': result += (char)( 0x98 ); break;
    case '¿': result += (char)( 0xbe ); break;
    case 'Ÿ': result += (char)( 0xab ); break;
    case '¥': result += (char)( 0xa4 ); break;
    case 'Æ': result += (char)( 0x8f ); break;
    case 'Ê': result += (char)( 0xa8 ); break;
    case '£': result += (char)( 0x9d ); break;
    case 'Ñ': result += (char)( 0xe3 ); break;
    case 'Ó': result += (char)( 0xe0 ); break;
    case 'Œ': result += (char)( 0x97 ); break;
    case '¯': result += (char)( 0xbd ); break;
    case '': result += (char)( 0x8d ); break;
        default: result += txt[i]; break;
    }
    return result;
}

void czekaj( int iMilisekundy )
{
    clock_t koniec = clock() + iMilisekundy * CLOCKS_PER_SEC / 1000.0;
    while( clock() < koniec ) continue;
    
}

void rozbijnapis(string rs, string &rs1, string &rs2){
//rozbija napis rs na dwa: rs1=do znaku / oraz rs2=od znaku /
rs1=rs2="";
int i=0;
while (rs[i]!=';'){
	rs1+=rs[i];
	i++;
};
i++;
while (i<rs.length()){
	rs2+=rs[i];
	i++;
};

}

bool czytajslowka(string &rplik, slowo rtab[MAXN], int &rn){
  // funkcja pyta uzytkownika o nazwe pliku otwiera go. jeÅ›li ok to zwraca true i czyta dane
  // plik zawiera dowolna ilosc wierszy do 100000 w postaci
  // wyraz obcy tlumaczenie (oddzielone spacjami)
  fstream p;	//plik ze s³ówkami
  string s,s1,s2;
  bool wyn=false;

  cout<<"Podaj nazwe pliku ze slowkami, np. slowka.txt: ";
  cin>>rplik;
  p.open(rplik.c_str(), ios::in);
  if (p.good()){
  	rn=0;
    wyn=true;
    while (getline(p,s)){		
		//czytamy ca³¹ liniê i dzielimy j¹ na s1 (do znaku /) i s2 (od znaku /)
		//t³umaczenia mog¹ bowiem zawieraæ spacje
		rozbijnapis(s,s1,s2);
		//TEST
		//cout<<"s="<<s<<"\n"<<cout<<", s1="<<s1<<"\n"<<cout<<", s2="<<s2<<"\n";
		
    	rn++;  
		rtab[rn].obc=s1;
		rtab[rn].pol=s2;
		rtab[rn].byl=0;		// ustawiamy pierwotnie ze slowo nie jest odgadniete  	
    }

	//TEST
	//system("pause");
    p.close();
  }
  
  return wyn;
}

int wybor(){
  //funkcja zapewnia wybor odpowiedniej opcji menu przez uzytkownika
  int wynik=0;
  cout<<"-----------------------------------------------------------------"<<endl;
  cout<<"                 Dokonaj wyboru jednej z opcji:                  "<<endl;
  cout<<"-----------------------------------------------------------------"<<endl;
  cout<<"  Plik "<<plik<<" zawiera "<<n<<" slow"<<endl;
  cout<<"  1. Sprawdzenie znajomosci wszystkich slowek"<<endl;
  cout<<"  2. Sprawdzenie znajomosci czesci slowek"<<endl;	 
  cout<<" "<<endl;  
  cout<<"  TWOJ WYBOR -> ";
  cin>>wynik;
  
  
  while (wynik!=1 && wynik!=2){
    cout<<"  DOKONAJ PONOWNIE WYBORU -> ";
    cin>>wynik;
  }
    	    
  return wynik;
}

int ileslow(int rn){
//ile slow chcesz czytac?max=rn	
int i=0;
cout<<"Ile slow chcesz testowac? (1,"<<rn<<") -> ";
cin>>i;
while (i<1 || i>rn){
  cout<<"Zla ilosc, podaj raz jeszcze -> ";
  cin>>i;	
}
return i;
}

void uruchomtest(slowo rtab[MAXN], int rn, int rilosc, int &rdobre, int &rzle){
  rdobre=rzle=0;	
  int los;
  string slowo;

  for (int i=1;i<=rilosc;i++){
  	
  	czyscbufor();
  	
  	// !!!! moze trzeba zrobic ograniczenie zeby przy duzej ilosc odgadniec program nie szukal na prozno pustej
	cout<<"Szukam wiersza jeszcze nie testowanego "<<endl; 
	cout<<"Gdyby czesto trwalo to dlugo powiedz o tym..."<<endl; 
  	do{		//losujemy do czasu az nie trafimy na jeszcze nie testowana liczbe
  	  los=(rand()%(rilosc))+1;	//losowanie liczby z zakresu 1-rilosc
     }while(rtab[los].byl!=0);			

    system("cls");
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"                 Slowo/Zwrot -> Tlumaczenie                         "<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<" "<<PL(rtab[los].pol)<<" -> ";
    //cin>>slowo;
    //mamy czytac ze spacjami cale zwroty tak¿e
    getline(cin,slowo);
    
    // !!!!! na razie bez konwersji UpCase
    if (slowo==rtab[los].obc){
	  rdobre++;
	  rtab[los].byl=1;
	  cout<<"      DOBRZE :-)    dobrych ("<<rdobre<<") zlych ("<<rzle<<")\n\n\n";
	  czekaj(800);
    }
    else{
      rzle++;
      cout<<"      ZLE :-)    dobrych ("<<rdobre<<") zlych ("<<rzle<<")\n\n";
      cout<<"      POPRAWNA ODPOWIEDZ: "<<rtab[los].obc<<"\n\n\n";
	  system("pause");
    }
      
    	
  }
	
}


void wynik(int rn, int rilosc, int rdobre, int rzle){
  cout<<"-----------------------------------------------------------------"<<endl;
  cout<<"                          WYNIKI TESTU:                          "<<endl;
  cout<<"-----------------------------------------------------------------"<<endl;
  cout<<"    Wszytkich pytan w pliku bylo: "<<rn<<endl;
  cout<<"    Ilosc wybranych przez Ciebie pytan do testu: "<<rilosc<<endl;
  cout<<"    Ilosc pierwszorazowych poprawnych odpowiedzi to "<<rdobre<<", co stanowi "<<((float)rdobre/rilosc)*100<<"%"<<endl; 
  cout<<"    Ilosc pierwszorazowych blednych odpowiedzi to "<<rzle<<", co stanowi "<<((float)rzle/rilosc)*100<<"%"<<endl; 	
}

main(){
  int wyb;
  int ilosc;	//uzytkownik moze dokonac ile prob chce wykonac (min 1 max n)
  
  srand(time(NULL));	//uruchomienie generatora liczb losowych

  if (czytajslowka(plik,tab,n)){ 
	wyb=wybor();
	
	switch(wyb){
	  case 1:
	  	ilosc=n;	//wszystkie slowka
	    break;
	  case 2:	
	    ilosc=ileslow(n);
	    break;		 		
	}
	
	int dobre,zle;	//dobre odpowiedzi, zle odpowiedzi
	uruchomtest(tab,n,ilosc,dobre,zle);
		  
	wynik(n,ilosc,dobre,zle);
	
  }
  else
    cout<<"Blad otwarcia pliku ze slowkami";
  
  cout<<"\n\n\n";
  system("pause");
  return 0;
}
