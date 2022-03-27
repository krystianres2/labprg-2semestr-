#include <iostream>
using namespace std;

class Figura {
	int a, b;
public:
	Figura(int a = 1, int = 2) {

	}
	void wczytaj()
	{
		cout << "Podaj liczbe: "<<endl;
		cin >> a;
		cout << "Podaj liczbe: "<<endl;
		cin >> b;
	}
	void wypisz()
	{
		cout << "Suma: " << a + b << endl;


	}
};



int main()
{
	Figura f1;

	f1.wczytaj();
	f1.wypisz();
	


}

