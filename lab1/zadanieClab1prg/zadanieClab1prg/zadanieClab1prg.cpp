

#include <iostream>
using namespace std;
float srednia(int* tab, int ile) {

	float suma = 0;

	for (int i = 0; i < ile; i++) {
		suma += *tab;
		tab++;
	}
	return suma / ile;
}


int main()
{
	int ile;
	cout << "Ile liczb w tablicy: " << endl;
	cin >> ile;

	int* tablica;
	tablica = new int[ile];

	for (int i = 0; i < ile; i++) {
		cout << "Podaj liczbe: " << endl;
			cin >> tablica[i];
	}
	cout << "Srednia wynosi: " <<srednia(tablica, ile) << endl;

	delete[] tablica;

}

