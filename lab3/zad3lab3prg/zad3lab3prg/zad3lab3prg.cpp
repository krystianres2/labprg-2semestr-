#include <iostream>
using namespace std;

class student {
	int nr;
	float srednia;
	string name;
	float marks1, marks2, marks3;

public:
	void input() {
		cout << "Podaj imie: "<<endl;
		cin >> name;
		cout << "Podaj numer albumu: " << endl;
		cin >> nr;
		cout << "Podaj 1 ocene: " << endl;
		cin >> marks1;
		cout << "Podaj 2 ocene: " << endl;
		cin >> marks2;
		cout << "Podaj 3 ocene: " << endl;
		cin >> marks3;
	}
	void calc() {
		srednia = (marks1 + marks2 + marks3) / 3;
		
	}
	void display() {
		cout << "Imie: " << name << endl;
		cout << "Nr albumu: " << nr << endl;
		cout << "Ocene 1: " << marks1 << endl;
		cout << "Ocena 2: " << marks2 << endl;
		cout << "Ocena 3: " << marks3 << endl;
		cout << "Srednia ocen: " << srednia << endl;
	}
};

int main()
{
	int ileStudentow;
	cout << "Ile studentow: "<<endl;
		cin >> ileStudentow;

		student* studenci;
		studenci = new student[ileStudentow];
		for (int i = 0; i < ileStudentow; i++) {
			studenci[i].input();
			studenci[i].calc();
		}
		cout << endl;

		for (int j = 0; j < ileStudentow; j++) {
			studenci[j].display();
		}

}

