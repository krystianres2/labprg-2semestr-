#include <iostream>

using namespace std;

int main()
{
	int a, b;

cout << "Podaj liczbe a: " << endl;
	cin >> a;
	cout << "Podaj liczbe b: " << endl;
	cin >> b;
	int* ptrA;
	int* ptrB;
	ptrA = &a;
	ptrB = &b;

	cout << "Liczba a wynosi " << *ptrA << endl;
	cout << "Liczba b wynosi " << *ptrB << endl;


}

