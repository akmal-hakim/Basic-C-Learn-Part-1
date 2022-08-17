#include <iostream>
using namespace std;
void main()
{
	cout<<"***********************"<<endl; 
	cout<<" AREA OF A RECTANGLE"<<endl; 
	cout<<"***********************"<<endl; 

	float a,b;
    float answer;

	cout << "Enter the width: ";  cin >> a;  cout << endl;
	cout << "Enter the length: ";  cin >> b;  cout << endl;

	answer= a*b;
	cout<< "Area of a rectangle:" << answer << endl;

	system("pause");

}