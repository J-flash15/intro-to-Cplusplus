#pragma once

#include <string>

using namespace std;


class BookPile {

private:
	string titles[9];
	int top; 

	
public:
	BookPile();
    bool add_book(string);
	int get_count() const { return top; }
	string get_top_title() const { return titles[top];}
	void remove_book() { top--; }

	
};