#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;


int main()
{
	vector<int> tab;
	int num1;
	cout << "Podaj ilosc liczb: " << endl;
	cin >> num1;

	for (int i = 0; i < num1; i++) {
		tab.push_back(i);
	}
	for (int i = 0; i < tab.size(); i++) {
		cout << tab[i] << " ";
	}

	reverse(tab.begin(), tab.end());
	cout << endl;
	for (int i = 0; i < tab.size(); i++) {
		cout << tab[i] << " ";
	}


}

