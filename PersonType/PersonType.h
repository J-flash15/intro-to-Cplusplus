#include <string>

using namespace std;

class AddressType {

    private:
		string address;
	    string city;
		string state;
		string zip;

	public:
		AddressType();
		AddressType(string address, string city, string state, string zip);
		void setAddress(string address, string city, string state, string zip);
		void printAddress() const;
};


class PersonType {
private:
	string firstName;
	string lasName;
	int age;
	double income;
public:
	AddressType address;

	PersonType();
	PersonType(string fname, string lname);
	PersonType(string fname, string lname, int age);


	~PersonType();


	void setFullName(string fname, string lname);
	void setAge(int age);
	void setIncome(double income);

	string getFullName() const;
	int getAge() const;
	double getIncome() const; 

	void print() const;

	

};