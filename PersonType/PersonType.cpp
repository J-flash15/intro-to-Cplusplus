#include <iostream>
#include "PersonType.h"

using namespace std;

PersonType::Persontype() {

	cout << "Executing default constrouctor:\n";
	this->firstName = ""; 
	this->lastNmae = ""; 
	this->age = 0; 
	this->income = 0.0;
}

 Persontype::PersonType(string fName, string lName) {

	 cout << "Executing constrouctor for: " << fName << " " << lName << endl;
	 this->firstName = fName;
	 this->lastNmae = lName;
	 this->age = 0;
	 this->income = 0.0;


}
 Persontype::PersonType(string fName, string lName, int age) {

	 cout << "Executing constrouctor for: " << fName << " " << lName << age << " " << endl;
	 this->fristName = fName;
	 this->lastName = lName;
	 this->age = age;
	 this->income = 0.0;

 }
 PersonType::~PersonType() {
	 cout << "Executing desstructor: " <<
	 this->firstName << " " <<
	 this->lastName << " " <<
	 this->age << endl;
	 
 }


 void PersonType::setFullName (string fname, string lname) {
	 this->firstName = fname;
	 this->lasName = lname;

 }
 void PersonType::setAge(int age) {
	 this->age = age;
 }
 void PersonType::setIncome(double income) {
	 this->income = income;
 }

 string PersonType::getFullName() const {
	 return this->firstName + " " + this->lastName;
 }

 int PersonType::getAge() const {
	 return this->age;
 }
 double PersonType::getIncome() const {
	 return this->income;
 }
 void PersonType::print() const {
	 cout << "PersonType full name: " <<
		 this->getFullName() << endl; 
	 cout << "Age: " << this->getIncome() << endl; 
	 this->address.printaddress();
 }

 AddressType::AddressType() {
	 this->setaddress("", "", "", "");
 }
 AddressType::setAddress(string address, string city, string state, string zip) {
	 this->address = address;
	 this->city = city;
	 this->state = state;
	 this->zip = zip; 
 }
 void AddresType::printAddress() const {
	 cout << "Adress: " << endl; 
	 cout << this->address << endl; 
	 cout << this->city << ", " <<
		 this - state << " " << this->zip << endl;
 }