#include<iostream>
using namespace std;
void CalcTotalAndAvg(int , int , double& , double&);
void input(int& , int&  );
void output(double , double );

main()
{
	int a, b ;
	double total , avg;

	
	input (a , b);
	CalcTotalAndAvg(a , b , total , avg);
	output(total ,avg);

	
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
void output(double total , double avg)
{
	cout<<"The total is : "<<total<<endl;
	cout<<"The average is : "<<avg<<endl;
	system("pause");
}
