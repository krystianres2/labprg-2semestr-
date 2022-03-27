

#include <iostream>
#include <ctime>

using namespace std;
int main()
{
	const int m = 10;
	int tab[m];

	srand(time(NULL));
	for (int i = 0; i < m; i++) {
		tab[i] = rand() % 10 + 1;
		cout << tab[i] << ' ';
	}
	cout << endl;
	int min = tab[0];
	for (int i = 1; i < m; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
	}
	cout << endl<< min << endl;


	return 0;
}

