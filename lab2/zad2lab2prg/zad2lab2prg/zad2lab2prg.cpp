#include <iostream>
#include <vector>
#include <iterator>
using namespace std;


int main()
{
    vector<int>tab;
    int num1,num2,num3;
    cout << "Podaj ilosc liczb: ";
    cin >> num1;
    for (int i = 0; i < num1; i++) {
        tab.push_back(i);
    }

    for (int i = 0; i < tab.size(); i++) {
        cout << tab[i] << " ";
    }
    cout << "Podaj liczbe: ";
    cin >> num2;
    cout << "Podaj index: ";
    cin >> num3;
    auto it = tab.begin();
    it += num3;
    tab.insert(it, num2);
    

    for (int i = 0; i < tab.size(); i++) {
        cout << tab[i] << " ";
    }


}

