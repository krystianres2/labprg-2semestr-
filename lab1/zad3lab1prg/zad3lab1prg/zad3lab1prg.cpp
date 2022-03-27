

#include <iostream>
using  namespace std;
int main()
{
	int n, * tab;
	cin >> n;
	tab = new int[n];

	

	for (int i = 0; i < n; i++) 
	{ *tab = i*10;
	cout << *tab << "\n";
	tab++;
	}
	cout << endl << endl;
	for (int i = 0; i < n; i++) {
		*(tab + i) = i*100;
		cout << *(tab+i) << "\n";
		
	}

}

