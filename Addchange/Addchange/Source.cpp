//
//  main.cpp
//  add change
//
//  Created by shamar j gordon  on 9/4/17.
//  Copyright © 2017 shamar j gordon . All rights reserved.
//
#include <iostream>

using  namespace std;


const int NUMBER_OF_PENNIES_IN_QUARTER = 25;



const int NUMBER_OF_PENNIES_IN_DIMES = 10;


const int NUMBER_OF_PENNIES_IN_NICKLES = 5;




int main() {


	int quarters;
	int dimes;
	int nickles;
	int totalInPennies;


	// prompt the user to input the number of quarters, dimes and nickles.
	cout << "Please enter  the number of quarters, dimes and nickles " << endl;
	cin >> quarters >> dimes >> nickles;

	//calcuate the total vaule of coin in pennies.
	totalInPennies = (quarters * NUMBER_OF_PENNIES_IN_QUARTER) + (dimes * NUMBER_OF_PENNIES_IN_DIMES) + (nickles * NUMBER_OF_PENNIES_IN_NICKLES);

	// output the total value of coin in pennies.

	cout << "Total value of coin in pennies " << totalInPennies << endl;





	system("pause");
	return 0;
}
