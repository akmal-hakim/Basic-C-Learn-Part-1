#include <iostream>
using namespace std;
void main()
{
	char name(15);
	double studyHours;
	
	
    cout << "Enter first name: ";
	cin >> name;
	cout << endl;
	cout << "Enter study hours: ";
	cin >> studyHours;
	cout << endl;
	cout << "Hello, " <<name<<", 0n Saturday, you need to study"<< studyHours<< " hours for the exam." << endl;
	system("pause");

}
