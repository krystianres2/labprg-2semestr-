#include <iostream>
using namespace std;

class Prostokat {
	int a;
	int b;
public:

	Prostokat(int a = 1, int c = 2) {
		this->a=a;
		b=c;
	}

	int wypisywanie() {

		return a * b;
	}

};

int main()
{
	Prostokat p1;
	cout<<p1.wypisywanie()<<endl;
	Prostokat kwadrat(3, 3);
	cout << kwadrat.wypisywanie();

}

