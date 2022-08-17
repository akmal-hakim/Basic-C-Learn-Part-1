#include<iostream>
using namespace std;


void CalcTotalAndAvg(int , int , double& , double&);
void input(int& , int& );
void output(double& , double& );

void main()
{
	int no1 , no2 ;
	double sum , avg;

	
	input (no1 , no2);
	CalcTotalAndAvg(no1 , no2 , sum , avg);
	output(sum ,avg);

	
}
void CalcTotalAndAvg(int a, int b, double& total, double& avg )
{
	total=a+b;
	avg=total/2;                      
}
void input(int& a, int& b)
{
	cout<<"Enter 1st number : ";
	cin>>a;

	cout<<"Enter 2nd number : ";
	cin>>b;
}
void output(double& sum , double& avg)
{
	cout<<"The total is : "<<sum<<endl;
	cout<<"The average is : "<<avg<<endl;
	system("pause");
}
