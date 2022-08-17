#include <iostream>
using namespace std;
main()
{
	float average,sum=0;
	char choice='Y';
	int score,numScore=0;
	while(choice !='N')
	{
		cout<<"\n Enter a score:";
		cin>>score;
		numScore++;
		cout<<"\n Continue? (Y/N):";
		cin>>choice;
		sum=sum+score;
    }
	cout<<"\n The number of scores entered:"<<numScore<<endl;
	average= (sum)/numScore;
	cout<<"\n The Average:"<<average;
	
	system("pause");
}
