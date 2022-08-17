#include <iostream>
using namespace std;
void main()
{
	const double connectionFee = 1.52, chargePerMinute = 0.03;
	
	float noOfminute;
    float ammountDue;

	cout << "Number of minute used:" ; cin >> noOfminute; cout << endl;

	ammountDue=connectionFee*chargePerMinute*noOfminute;

	cout << setprecision(2) << fixed; 
	cout << "Ammount due RM:" << ammountDue << endl;
	system("pause");

}