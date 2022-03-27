#include <iostream>
#include <string>
#include "Color.h"
using namespace std;

main() {

	Color bialy;
	Color nowy;

	Color czarny(0, 0, 0, "czarny");
	cout << czarny.getName();
}