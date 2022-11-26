#include <iostream>
#include <string>
#include "PersonType.h"

using namespace std; 

void CreatePersontTypestudent();
void CreatePersontTypeTeacher();

int main() {
	cout << "prior to CreatePersonTypeTeacher\n";
	CreatePersonTypeTeacher();
	cout << "after CreatePersonTypeTeacher\n";

	system("pause");
	return 0;
}
void CreatePersonTypestudent() {
	cout << "stringing CreatePersonTypestudent()\n";
	PersonType student;
	cout << "ending createPersonTypeStudent()\n";

}

 void CreatePersonTypeTeacher() {
	cout << "starting CreatePersonTypeTeacher()\n";
	PersonType teacher("Tom", "Thumb", 60);
	teacher.setIncome(25000);
	teacher.address.setAddress("123 main st", "sometown", "PA", "12345");
	teacher.print();

	cout << "ending CreatePersonTypeTeacher()\n";

}
