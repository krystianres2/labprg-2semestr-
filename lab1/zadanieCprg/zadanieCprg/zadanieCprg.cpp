#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
clock_t start, stop;
double czas;
/*float srednia(int tab[], int suma) {
	return suma / 10000;
}*/
float srednia2(int* tab, int* wsk) {
	return *wsk / 10000;
}
int main()
{
	int ile = 0;
	start = clock();
	int tab[10000];
	int suma=0;
	for (int i = 0; i < 10000; i++) {
		tab[i] = i;
		suma += i;
	}

	int* wsk;
	wsk = &suma;
	//cout <<srednia(tab, suma) << endl;
	cout <<srednia2(tab, wsk) << endl;

	stop = clock();
	czas = (long double)(stop - start) / CLOCKS_PER_SEC;
	cout << czas << endl;
}

