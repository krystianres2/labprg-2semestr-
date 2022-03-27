#include <iostream>
#include "event.h"
using namespace std;


void Event::load()
{
	cout << "Nazwa wydarzenia: " << endl;
	cin >> name;
	cout << "Dzien: " << endl;
	cin >> day;
	cout << "Miesiac: " << endl;
	cin >> month;
	cout << "Rok: " << endl;
	cin >> year;
	cout << "Godzina: " << endl;
	cin >> hour;
	cout << "Minuta: " << endl;
	cin >> minutes;
}

void Event::show() {
	cout << endl << name << " " << day << "." << month << "." << year << " " << hour << ":" << minutes << endl;
}

Event::Event(string n, int d, int m, int y, int h, int mins)
{
	name = n;
	day = d;
	month = m;
	year = y;
	hour = h;
	minutes = mins;
}

Event::~Event() {
	cout << endl << "cos tam";
}

