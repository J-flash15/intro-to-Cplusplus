#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

int main() {
    string lastName;
    string firstName;
    double salary;
    double increasePercentage;
    double updatedSalary;
    int counter = 0;
    
    ifstream inFile;
    ofstream outFile;
    
    inFile.open("Ch3_Ex5Data.txt");
    outFile.open("Ch3_Ex5OutputData.txt");
    
    if (!inFile) {
        cout << "File not found for input, please ensure the file is in correct location\n";
        system("pause");
        return 1;
        
    }
    
    outFile << fixed << showpoint << setprecision(2);
    
    while (counter++ < 3) {
        //input
        inFile >> lastName >> firstName >> salary >> increasePercentage;
        //process
        updatedSalary = salary * (1 + increasePercentage / 100);
        //output
        outFile << setw(10) << firstName << " " << setw(10) << lastName << " " << setw(10) << updatedSalary << endl;
        
    }
    
    
    inFile.close();
    outFile.close();
    
    
    system("pause");
    return 0;
}
