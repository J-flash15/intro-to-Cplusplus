#include <iostream>
#include <string>

using namespace std;

enum months { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec, };
enum days { Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat };


int main() {




	//for (int month = Jan; month <= Dec; month++) {
	// cout << "month :" << month << endl;
	//}




	//for (months month = Jan; month <= Dec;
	//month = static_cast<months>(month + 1)) {

	//	cout << "month :" << month << endl; 
	//}


	for (days day = Sun; day <= Sat; day = static_cast<day> (day + 1)) {

		cout << "day :" << day << endl;
	}

	switch (day) {
	case Sun:
		cout << "its sunday\n";
		break;
	case Sun:
		cout << "its sunday\n";
		break;
	case Sun:
		cout << "its sunday\n";
		break;
	case Sun:
		cout << "its sunday\n";
		break;
	case Sun:
		cout << "its sunday\n";
		break;
	case Sun:
		cout << "its sunday\n";
		break;
	case Sun:
		cout << "its sunday\n";
		break;
	default:
		cout << "not a day\n";
	}// end switch 
} // end for 

	 
	system("pause");
	return 0;
}