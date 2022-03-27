
#include <iostream>
using namespace std;

int main()
{
	int liczba = 1234;

	int* w = &liczba;

	cout <<"liczba: "<< liczba << endl;
	cout << "adres: " << &liczba << endl;
	cout << "wskaznik: " << w << endl;
	cout << "liczba ze wskaznika: " << *w << endl;

	cout << "adres w formie dziesietnej: " << (long)w << endl;
}

