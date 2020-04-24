#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

class osoba
	{
		public:
		string imie,nazwisko;
		int pesel;
		string napis;
		char znak;
		ifstream plik1;
  		ofstream plik2;
		osoba();
    	osoba2();
		void wprowadz1();
		void wypisz1();
		void wprowadz2();
		void wypisz2();
	};
osoba::osoba()
	{
    	plik1.open("c:\\plik.txt");
    	plik2.open("c:\\zapisz.txt");
	};
void osoba::wprowadz1()
	{
		cout<<"Imie, Nazwisko, Pesel:"<<endl;
		cin>>imie>>nazwisko>>pesel;
	};
void osoba::wypisz1()
	{
		cout<<imie, nazwisko, pesel;
	}
void osoba::wprowadz2()
	{
		int i=0;
	};
void osoba::wypisz2()
	{
		plik2<<imie, nazwisko, pesel;
	}
class uczen:public osoba
	{
		string klasa;
		string srednia;				
		public:
		void wprowadz_ucznia_1();
		void wprowadz_ucznia_2();
		void wypisz_ucznia_1();
		void wypisz_ucznia_2();
	};
void uczen::wprowadz_ucznia_1()
	{
		wprowadz1();
		cout<<"Œrednia: "<<endl;
		cin>>klasa>>srednia;
	};
void uczen::wypisz_ucznia_1()
	{
		cout<<imie<<nazwisko<<pesel<<klasa<<srednia;	
	};
void uczen::wprowadz_ucznia_2()
	{
		int i=0;
		wprowadz2();
		while(!plik1.eof())i++;
	};
void uczen::wypisz_ucznia_2()
	{
		plik2<<imie<<nazwisko<<pesel<<klasa<<srednia;
	};
class nauczyciel:public osoba
	{
		string przedmiot;
		public:
		void wprowadz_nauczyciel_1();
		void wprowadz_nauczyciel_2();
		void wypisz_nauczyciel_1();
		void wypisz_nauczyciel_2();
	};
void nauczyciel::wprowadz_nauczyciel_1()
	{
		wprowadz1();
		cout<<endl<<"Przedmiot: "<<endl;
		cin>>przedmiot;
	};
void nauczyciel:: wypisz_nauczyciel_1()
	{
		cout<<imie<<nazwisko<<pesel<<przedmiot;
	};
void nauczyciel::wprowadz_nauczyciel_2()
	{
		wprowadz2();
		while(!plik1.eof())
		{ 
        	plik1>>znak>>napis;    
		}
		cout<<znak<<napis;
	}

void nauczyciel::wypisz_nauczyciel_2()
	{
		plik2<<imie<<nazwisko<<pesel<<przedmiot;
	}

osoba::osoba2()
	{
    	plik1.close();
    	plik2.close();
	}

int main(int argc, char** argv) 
{
	return 0;
}
