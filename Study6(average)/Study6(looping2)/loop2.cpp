#include <iostream>
using namespace std;
void main()
{
	int number, sum=0;
	int count = 1;
	int average;

	while(count<6)
	{
		cout<<"Enter number" << count <<":";
		cin>>number;

		sum= sum + number;
		average= sum/5;
		
	    count++;
	}
	cout<< "The sum is : "<< sum <<endl; 
	cout<< "The average is : "<< average <<endl; 
	system("pause");
}