#include <iostream> 
using namespace std;

void CalcTotalAndAvg(int,int,int&,double&);
int main()
{
	int no1,no2,sum;
	double avg;

	cout<<"Enter 1st number:";
	cin>>no1;

	cout<<"Enter 2nd number:";
	cin>>no2;

	CalcTotalAndAvg(no1,no2,sum,avg);
	cout<<"The Total is"<<sum<<endl;
	cout<<"The average is"<<avg;
    
	system("pause");

	return 0;
}
void CalcTotalAndAvg(int no1,int no2, int& sum, double& avg)
{
	sum=no1 + no2;
	avg= sum/2.0;
}
