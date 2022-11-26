#include "bankaccount.h"
#include <iostream>
using namespace std;

int main() {
	BankAccount account1;
	BankAccount account2("Cindy Jones");
	BankAccount account3;

	acc

	cout << account1.deposit(10) << endl;
	cout << account1.deposit(7.22) << endl;
	cout<< account2.deposit(8.76) << endl;
	cout << account3.deposit(-2) << endl;

	cout << account1.get_balance() << endl;
	cout << account2.get_balance() << endl;
	cout << account3.get_balance() << endl;

	system("pause");
	return 0;
}