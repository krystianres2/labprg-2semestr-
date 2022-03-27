#include <iostream>

using namespace std;

int main()
{
	const char* tab;
	tab = new char[20];
	//tab= { 'A','S','t','r','i','n','g' };
	tab= "A string" ;
	cout << tab[0] << endl;

	cout << *tab<<endl;
	cout << &tab[0]<<endl;
	cout << *(tab+3) << endl;
	tab++;
	tab++;
	tab++;
	tab++;
	tab++;
	tab++;
	cout << tab << endl;


}

