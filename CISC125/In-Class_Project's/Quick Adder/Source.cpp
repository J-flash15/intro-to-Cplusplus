
// quick-adder-main - Main program for testing the QuickAdder class.

#include <climits>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include "quickadder.h"
using namespace std;

// TODO: Remove this typedef when then QuickAdder class is implemented. This
//  is provided as a placeholder so that a QuickAdder type can be used in
//  this program.
//typedef int QuickAdder;

// Prototype for a function that will simulate a Quick Adder.
void simulate_quickadder(QuickAdder& qa);

// The main function declares three Quick Adder devices. It then uses a loop
//  to allow the user to select any of the three devices to work with, then
//  calls simulate_quickadder to work that the selected device.
int main() {

	QuickAdder qa1;     // First Quick-adder
	QuickAdder qa2;     // Second Quick-adder
	QuickAdder qa3;     // Third Quick-adder

	char qa_number;

	cout << fixed << setprecision(2);

	cout << "This program simulates the Quick-Adder. It defines three" << endl;
	cout << "Quick Adder devices. First, choose which Quick-Adder you" << endl;
	cout << "wish to work with. You can then indicate which buttons" << endl;
	cout << "to press on that device." << endl;

	do {
		// Get device number
		cout << endl << "Enter device number (1, 2, or 3), or 'q' to quit: ";

		cin >> qa_number;
		cin.ignore(INT_MAX, '\n'); // Ignore extra input, and new-line

		switch (qa_number) {
		case '1':
			cout << endl << "Working with device #1..." << endl;
			simulate_quickadder(qa1);
			break;
		case '2':
			cout << endl << "Working with device #2..." << endl;
			simulate_quickadder(qa2);
			break;
		case '3':
			cout << endl << "Working with device #3..." << endl;
			simulate_quickadder(qa3);
			break;
		}

	} while (qa_number != 'q');

	return 0;
}

void simulate_quickadder(QuickAdder& qa) {

	QuickAdder quickadder;
	cout << "Enter buttons (1, 2, 3) and press ENTER. When finished" << endl;
	cout << "with this Quick Adder, simply press ENTER." << endl << endl;

	string buttons;

	cout << "Total $" << quickadder.get_total() << endl;
	cout << "> ";
	getline(cin, buttons);
	while (buttons.size()) {
		for (size_t i = 0; i < buttons.size(); i++) {
			switch (buttons[i]) {
			case '1':
				quickadder.button1_click();
				break;
			case '2':
				quickadder.button2_click();
				break;
			case '3':
				quickadder.button3_click();
				break;
			}
		}

		cout << "Total $" << quickadder.get_total() << endl;
		cout << "> ";
		getline(cin, buttons);
	}
}