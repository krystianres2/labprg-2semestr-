#include <iostream>
#include <algorithm>
using namespace std;

class Potegowanie {
    double  a;
    unsigned int b;
public:
    Potegowanie(double a = 2.5, unsigned int b = 3.5) {
        this->a = a;
        this->b = b;
    }
    double potega() { return pow(a,b); }
    double potegaFor() {
        for(int i=1;i<=b;i++)
    }

};


int main()
{
    Potegowanie pow1(3, 6);
    cout << pow1.potega();


}

