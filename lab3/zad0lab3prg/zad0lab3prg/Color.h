#pragma once
#include <iostream>
#include <string>
using namespace std;
class Color { //pocz¹tek definicji 

	int r;
	int g; // sk³adniki klasy
	int b;
	string name;
public:
	//Color() { //definicja konstruktora bezparametrowego
		//r = 255; g = 255; b = 255;
		//strcpy(name, "bialy”);
	//}
	//definicja konstruktora z parametrami 
	Color(int c_r = 2, int c_g = 24, int c_b = 43, string n = "bialy") {
		r = c_r; g = c_g; b = c_b;
		name = n;
	}
	~Color() { //definicja destruktora 
		cout << "Destruktor";
	}
	//metoda
	void setColor(int c_r, int c_g, int c_b) {
		r = c_r; g = c_g; b = c_b;
	}
	//metoda
	string getName() { return name; }
};