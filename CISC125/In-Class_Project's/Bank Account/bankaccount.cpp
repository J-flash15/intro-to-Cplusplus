#include "bankaccount.h"

BankAccount::BankAccount() {
	total_deposits = total_withdrawls = 0;
	account_number = 0;	// TODO: auto-assign this
}

double BankAccount::get_balance() const {
	return total_deposits - total_withdrawls;

}

double BankAccount::get_total_deposits() const {
	return total_deposits;
}

double BankAccount::get_total_withdrawls() const {
	return total_withdrawls;
}

bool BankAccount::deposit(double amount) {
	if (amount <= 0)
		return false;
	total_deposits += amount;
	return true;
}

bool BankAccount::withdrawl(double amount) {
	if (amount <= 0 || amount > get_balance())
		return false;
	total_withdrawls += amount;
	return true;
}