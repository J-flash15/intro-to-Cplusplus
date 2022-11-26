#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

bool openfile(ifstream& file, string& name);
void closefile(ifstream& file);
int processDatafile(ifstream& file);

int main() {



	ifstream infile;
	string fileName = "realEstateDatalarge.csv";
	if (!openfile(infile, fileName)) {
		cout << "Error opening file\n";
		system("pause");
		return 1;

	}


	cout << "line in file:" << processDatafile(infile) << endl; 

	closefile(infile);



	system("pause");
	return 0;

}

int  processDatafile(ifstream& file) {
	int lineCount = 0;
	string line, value;

	while (getline(file, line)) {
		cout << line << endl;

		stringstream linestream(line);

		while (getline(linestream, value,  ',')) {
			cout << "value ( " << value << " ) \n";

		}

		cout << ("lines Complete\n");
		lineCount++;

	}

	return lineCount;
}

void closefile(ifstream& file) {
	file.close();
}


 bool openfile(ifstream& file, string& name) {


		file.open(name);
		if (file.is_open())

			return true;

		else

			return false;
}