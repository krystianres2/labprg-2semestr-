

#include <iostream>
using namespace std;
int main()
{
	int tab[5]{ 1,2,3,4,5 };
	int* pointerTab;
	pointerTab = &tab[0];

	cout << "pointerTab[0]=" << pointerTab << endl;
	cout << endl;
	cout <<"direction=[2]" <<pointerTab + 2<<endl;
	cout << "result[2]= " << *(pointerTab + 2) << endl;
	for (int i = 0; i < 5; i++) {
		cout << pointerTab<<"----->"<<*pointerTab;
		pointerTab++;
		
		cout << endl;
	}

}

