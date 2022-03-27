

#include <iostream>
using namespace std;

int dodaj(int *a, int *b) {

    return *a + *b;
}



int main()
{
    int hieronim=10, makaj=9;
    
    cout << dodaj(&hieronim, &makaj);


}

