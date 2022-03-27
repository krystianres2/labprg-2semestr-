
#include <iostream>
using namespace std;

int main()
{
	int x, i = 0;
	int tab[5] = { 6,12,2,4,3 };
	cout << "Podaj liczbe" << endl;
	cin >> x;

	while (i < 5) {

		if (tab[i] == x) {
			cout << "wartosc wystepuje w tablicy";
			return 0;
		}
		i++;
	}
	cout << "wartosc nie wystepuje w tablicy";
}

