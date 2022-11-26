//Shamar Gordon
//cisc125
//Assigment #1 
//meet at 10:00am-11:40am

#include <ctime>
#include "monty.h"
#include <cstdlib> 

using namespace std;

bool monty(char strategy) {

	int choice;
	int winner;
	
	//signing doors to the player and winner 
	choice = rand() % 3 + 1; 

	winner = rand() % 3 + 1;


	if (strategy == 'r') //50 % chance of being true(keep strategy), 50 % chance of being false(swap strategy
	{

		if (rand() % 2 == 1)// Flip a coin (random) to determine the contestant strategy 
			strategy = 'k';

		else
			strategy = 's';

	}
	//Player wins
	if (strategy == 's' && choice != winner)
		return true;
	
	else if (strategy == 'k' && choice == winner)
		return true;
	else
		return false; //Player loses

	return false;
};

//This function simulates the game a given number of times and return the number of times the
//contestant won the prize.

int monty(char strategy, int n_games)

{
	int count = 0;

	for (int i = 0; i < n_games; ++i) {

		if (monty(strategy))
		{
			count++;
		
		}

	}
	  

	return count;
	
}