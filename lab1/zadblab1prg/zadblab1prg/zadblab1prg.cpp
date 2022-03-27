

#include <iostream>
using namespace std;

int n;
int* fib;
int zadanie2B() {
    cout << "ile liczb fibonacciego mam wyznaczyć: ";
    cin >> n;
    fib = new int[n];
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; i++) {
        cout << endl << "wyraz nr" << i + 2 << ": " << fib[i];
        fib++;
    }
    return 0;

    
}





int main()
{
    
    zadanie2B();


}

