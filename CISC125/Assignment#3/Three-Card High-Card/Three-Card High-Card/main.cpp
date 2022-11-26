//Shamar Gordon
//cisc125
//Assigment #3  
//meet at 10:00am-11:40am
#include "Cards.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Player1, Player2;

int main() {
	srand(time(0));
	Deck d; 
  

	for (int i = 0; i < 10; i++) {
		if (Player1 < Player2); {

			cout << "Player1" << Player1 << endl;
			cout << "Player2" << Player2 << endl;

		}
		Card c1 = d.deal();
		Card c2 = d.deal();
		if (c1.eq(c2)) 
			cout << c1.str() << " equals " << c2.str() << endl;
		else if (c1.gt(c2))
			cout << c1.str() << " greater than " << c2.str() << endl;
		else
			cout << c1.str() << " less than " << c2.str() << endl;

	} 


	 


	sysetm("pause");
	return 0;
}


