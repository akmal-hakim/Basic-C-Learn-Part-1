#include <iostream>
using namespace std;
void main ()
{
	int noPayment,num,average,count =0,sum=0;
	cout<<"Enter number of payment:";
	cin>>noPayment;

	while (count <= noPayment)
	{
		cout<<"Payment"<<count<<":";
		cin>>num;
		sum=sum+num;
		count++;
	}
	average=sum/noPayment;
	cout<<"Sum:"<<sum;
	cout<<endl;
	cout<<"Average:"<<average;
system("pause");
}