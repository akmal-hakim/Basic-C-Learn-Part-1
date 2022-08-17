#include <iostream>
using namespace std;
void main()
{
   
	float a,b,c,d,e;
	float answer;
	
	cout << "Enter first test score: ";  cin >> a;  cout << endl;
	cout << "Enter second test score; ";  cin >> b;  cout << endl;
	cout << "Enter third test score; ";  cin >> c; cout << endl;
	cout << "Enter fourth test score; ";  cin >> d;  cout << endl;
	cout << "Enter fifth test score; "; cin >> e;  cout << endl;

    answer = (a+b+c+d+e) /5;

	cout<< "Average of the test score:" << answer << endl;

	system("pause");
}