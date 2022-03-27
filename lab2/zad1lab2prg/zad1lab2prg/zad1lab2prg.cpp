

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> tab;
    for (int i = 0; i < 10; i++) {
        int tmp;
        cin >> tab[i];
        tab.push_back(tmp);
    }

    for (int i = 0; i < 10; i++) {
        cout << tab[i] << endl;;
    }

    cout << "Podaj liczbe calkowita: ";
    int liczba, licznik = 0;
    cin >> licznik;

    for (int i = 0; i < 10; i++) {
        if (tab[i] == liczba) {
            licznik++;
        }

    }
    cout << "Liczba " << liczba << "znaleziono " << licznik << endl;
}

