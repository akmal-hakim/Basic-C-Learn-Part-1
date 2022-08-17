#include <iostream>
#include <cstring>
using namespace std;

void main()
{
	char code[5],name[20],courseName[30];
	float fee;

	cout<<"Student Name:";
	cin.getline(name,20);
	cout<<"Course code:";
	cin>>code;

	if (strcmp(code,"CS")==0)
	{
		strcpy_s(courseName,"Diploma Computer Science");
	    fee=1500;
	}
	else if (strcmp(code,"QS")==0)
	{
		strcpy_s(courseName,"Qualitative Science");
		fee=2000;
	}
	else
	{
		strcpy_s(courseName,"Wrong Code");
		fee=0;
	}
	cout<<"Student Name:"<<name<<endl;
	cout<<"Course Code:"<<code<<endl;
	cout<<"Course Name:"<<courseName<<endl;
	cout<<"Course Fee:"<<fee<<endl;
	
	system("pause");
}

