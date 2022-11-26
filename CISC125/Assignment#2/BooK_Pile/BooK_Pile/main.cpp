// bookpile-test - Test Program for Book Pile class, CISC-125
//
// This program is provided for testing class "BookPile". It provides a simple
//	menu-driven user interface for class operations of retrieving the number
//	of books on a pile, the title of the top book on the pile, adding a book's
//	title to a pile, and revoving the top book from the pile.
#include <climits>
#include <iostream>
#include <string>
#include "BookPile.h"
using namespace std;

void add_book(BookPile& p);
void remove_book(BookPile& p);
void show_count(const BookPile& p);
void show_top_title(const BookPile& p);

int main() {

	BookPile p;			// An object to represent a book pile
	int menu_option;	// Menu option, input by the user

	cout << "BookPile Test Program" << endl << endl;

	do {
		// Display menu of options
		cout << "1 - Show Number of Books on Pile" << endl;
		cout << "2 - Show Title of Top Book on Pile" << endl;
		cout << "3 - Add a Book to the Pile" << endl;
		cout << "4 - Remove a Book from the Pile" << endl;
		cout << "9 - Exit the Program" << endl << endl;
		cout << "Option: ";

		// Get user's menu option. Assumes that the user will enter an integer.
		cin >> menu_option;
		cout << endl;

		// Based on user's input, call a function, passing the BookPile object
		//	as a parameter, to carry out the user's selected option;
		switch (menu_option) {
		case 1: show_count(p); break;		// Show book pile count
		case 2: show_top_title(p); break;	// Show title of top book on pile
		case 3: add_book(p); break;			// Add a book to top of pile
		case 4: remove_book(p); break;		// Remove book from top of pile
		}

	} while (menu_option != 9);

	return 0;
}

// Add a book to top of pile. Prompts for a book title, then calls BookPile
//	'add_book' member function to add the title. Function 'add_book' returns
//	a bool to indicate whether or not the addition of the title was successful.
//	Adding a book to the pile is unsuccessful when the pile will not accomodate
//	another book.
void add_book(BookPile& p) {

	// Get title to be added
	string title;
	cout << "Enter title: ";
	cin.ignore(INT_MAX, '\n');
	getline(cin, title);

	// Add (or attempt to add) the title, and report success or fail.
	if (p.add_book(title))
		cout << "Book added." << endl << endl;
	else
		cout << "Book not added. Pile is full." << endl << endl;
}

// Remove the top book from the pile. This function checks to see if there
//	is at least one book before calling the 'remove_book' member function.
void remove_book(BookPile& p) {
	if (p.get_count()) {
		p.remove_book();
		cout << "Book removed." << endl << endl;
	}
	else
		cout << "No books on pile." << endl << endl;
}

// Report the number of books on the pile by calling the 'get_count' member
//	function.
void show_count(const BookPile& p) {
	cout << "Books on pile: " << p.get_count() << endl << endl;
}

// Show the title of the book on top of the pile, by calling the
//	'get_top_title' member function. This function first checks to see if
//	there is at least one book on the pile by calling 'get_count'.
void show_top_title(const BookPile& p) {
	if (p.get_count())
		cout << "Top book is " << p.get_top_title() << endl << endl;
	else
		cout << "No books on pile";
}