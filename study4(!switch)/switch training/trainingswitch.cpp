#include <iostream>
using namespace std;
void main()
{ 
	int code;
	cout<< "Enter code (1,2 or 3):";
		cin>>code;

	switch(code)
	{
	case 1:
		cout<< "Diploma in Computer Science";
			break;
	case 2:
		cout<< "Diploma in Accountancy";
		break;
	case 3:
		cout<< "Diploma in Quantitative Science";
		break;
	default:
		cout<<"Wrong code entered";

		
      }
	system("pause");
}
