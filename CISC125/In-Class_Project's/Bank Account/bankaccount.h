#pragma once

#include <string>

class BankAccount {
private:
	int account_number;
	std::string name;
	double total_deposits;
	double total_withdrawls;

public:
	BankAccount();

	int get_account_number() const;
	double get_balance() const;
	double get_total_deposits() const;
	double get_total_withdrawls() const;

	std::string get_name() const;
	void set_name(std::string new_name);

	bool deposit(double amount);
	bool withdrawl(double amount);

};
