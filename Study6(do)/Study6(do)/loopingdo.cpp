#include <iostream>
using namespace std;
main()
{
	int number, sum=0;
	int count = 1;
	int average;

	do
	{
		cout<<"Enter number" << count <<":";
		cin>>number;

		sum= sum + number;
		average= sum/5;
		
	    count++;
	}
	while(count<6);
	cout<< "The sum is : "<< sum <<endl; 
	cout<< "The average is : "<< average <<endl; 
	system("pause");
}
