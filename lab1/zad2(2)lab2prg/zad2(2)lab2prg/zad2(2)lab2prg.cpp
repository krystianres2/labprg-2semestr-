#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cout << "Ile liczb chcesz wprowadzic: " << endl;
	cin >> n;

	int* tab;
	tab = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Podaj liczbe calkowita: " << endl;
		cin >> tab[i];
	}
	for (int j = 0; j < n; j++) {
		if (tab[0] < tab[j])
			swap(tab[0], tab[j]);
	}
	
	int* wsk;
	wsk = &tab[0];

	cout << *wsk << endl;
	cout << wsk << endl;
	
	delete[] tab;
}

