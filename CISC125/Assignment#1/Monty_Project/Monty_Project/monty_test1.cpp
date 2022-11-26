// monty_test1.cpp - Test program #1 for Monty module

#include "monty.h"
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

static char get_strategy();

int main() {

	// Initialize random number generator
	srand(time(0));

	cout << "Testing monty function..." << endl << endl;

	// Call monty function with user's choice of strategy, and report result
	if (monty(get_strategy()))
		cout << "Contestant won." << endl;
	else
		cout << "Contestant lost." << endl;

#ifdef _WIN32
	system("pause");
#endif

	return 0;
}

// Prompt for and input strategy, with validation
static char get_strategy() {

	// Get strategy, must be 's', 'k', or 'r'.
	char strategy;
	cout << "Enter strategy (s, k, r): ";
	cin >> strategy;

	// Validate input
	while (strategy != 's' && strategy != 'k' && strategy != 'r') {
		cout << "Strategy is not valid. Try again." << endl;
		cin.ignore(INT_MAX, '\n');
		cin >> strategy;
	}

	// Discard any remaining input
	cin.ignore(INT_MAX, '\n');

	return strategy;
}