#include <iostream>
using namespace std;
void main()
{
	int total=0;
	int number;
	bool stop=false;
	while(!stop)
	{ 
		cout<< "Enter a number(-1 to quit):";
		cin>> number;
		if (number >=0)
			total+= number;
		else 
			stop=true;
	}
	cout <<"Total = "<< total<<endl;
system("pause");
}