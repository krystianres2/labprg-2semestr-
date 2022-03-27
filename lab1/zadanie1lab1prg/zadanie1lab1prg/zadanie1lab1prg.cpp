
#include <iostream>
using namespace std;
int main()
{
    int a = 23, b = 324;
    int* pa;
    pa = &a;
    b = *pa;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "pa=" << pa << endl;
    cout << "*pa=" << *pa << endl;



}

