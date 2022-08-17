#include <iostream>
using namespace std;
void main()
{
	int number, sum=0;
	int average;

	for ( int i = 1; i<=5; i++)
	{
		cout<<"Enter number" << i <<":";
		cin>>number;

		sum= sum + number;
		average= sum/5;
		
	    
	}
	cout<< "The sum is : "<< sum <<endl; 
	cout<< "The average is : "<< average <<endl; 
	system("pause");
}