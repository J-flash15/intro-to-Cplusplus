//Shamar Gordon
//cisc125
//Assigment #2 
//meet at 10:00am-11:40am

#include "BookPile.h"
#include <string>
using namespace std;

bool BookPile::add_book(string bookTitle)
{
	if (top < 10)
	{
		titles[++top] = bookTitle;
		return true;
	}else { return false; }

}

BookPile::BookPile() {
	
	top = 0;
	
	
} 
