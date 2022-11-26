// Program Name: Source.cpp
//Excersice #26 calculate Inflation Rate
//
//input today price, last year price, two year price
//
// processing calculating percent change between today price and last year price and
//             calculating percent change between last year price and two year ago price,
//             display the percent changes, display if the percent changes are increasing or decreasing
//             ask if you want to do it again 
//
//Shamar Gordon 
//
//CISC115 10:00am Mon and wed
//Assignment #5 due: October 23, 2017

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

//prototype 
void input_prices(double& current_price, double& one_year, double& two_year);
double calculate_inflation(double prior_year_price, double year_price);
void display_inflation_rate(string msg, double inflation_rate);
void display_increasing_or_decreasing(double inflation_rate);

int main() {

	//variables

	double one_year;
	double two_year;
	double current_price;
	double inflation_rate;
	char again;

	
			do {

				//input 
				input_prices(current_price, one_year, two_year);
				

				cout.setf(ios::fixed);
					cout.setf(ios::showpoint);
				cout.precision(2);


				//process -calculation-call function 
				inflation_rate = calculate_inflation(one_year, current_price);



				//output

				display_inflation_rate("The one year vs current year inflation rate is ", inflation_rate);
				display_increasing_or_decreasing(inflation_rate);
				
				//process -calculation-call function 
				inflation_rate = calculate_inflation(two_year, one_year);

				//output
				display_inflation_rate("The two year vs one year inflation rate is ", inflation_rate);
				display_increasing_or_decreasing(inflation_rate);


				cout << endl;
				cout << "Do you want to continue (Y/N)?" << endl;
				cin >> again;

			} while ((again == 'Y') || (again == 'y'));


			cout << endl;
			system("pause");
			return 0;

		
		}

//input function to get the prices
void input_prices(double& current_price, double& one_year, double& two_year) {

	do {
		cout << "Enter the item price today (price greater than zero) :";
		cin >> current_price;
		cout << endl;
	} while (current_price <= 0);

	do {
		cout << "Enter the item price one year ago (price greater than zero) :";
		cin >> one_year;
		cout << endl;
	} while (one_year<= 0);

	do {
		cout << "Enter the item price two year ago (price greater than zero) :";
		cin >> two_year;
		cout << endl;
	} while (two_year <= 0);
}

//calculation function to determine inflation/ deflation rate 
double calculate_inflation(double prior_year_price, double year_price) 
{

	//cout << (year_price - prior_year_price) / prior_year_price * 100 << "%" << endl;  // test function 
	return ((year_price - prior_year_price) / prior_year_price );
}

//display inflation rate
void display_inflation_rate(string msg, double inflation_rate) {

	cout << msg << (inflation_rate * 100) << " percent." << endl;
}

//display if increasing or decreasing rate 
void display_increasing_or_decreasing(double inflation_rate) {

	if (inflation_rate > 0)
		cout << "the inflation rate is increasing" << endl;
	else
		cout << "the inflation rate is derceasing " << endl;

	cout << endl;


}

	
/* results

Enter the item price today (price greater than zero) :10

Enter the item price one year ago (price greater than zero) :5

Enter the item price two year ago (price greater than zero) :2

The one year vs current year inflation rate is 100.00 percent.
the inflation rate is increasing

The two year vs one year inflation rate is 150.00 percent.
the inflation rate is increasing


Do you want to continue (Y/N)?
Y
Enter the item price today (price greater than zero) :2

Enter the item price one year ago (price greater than zero) :5

Enter the item price two year ago (price greater than zero) :10

The one year vs current year inflation rate is -60.00 percent.
the inflation rate is derceasing

The two year vs one year inflation rate is -50.00 percent.
the inflation rate is derceasing


Do you want to continue (Y/N)?



*/
