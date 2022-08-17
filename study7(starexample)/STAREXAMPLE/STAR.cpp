#include <iostream>

using namespace std;

void printStars(int blanks, int StarsInLine);

int main()
{
	int noOfLines; // variables to store the number of lines
	int counter; //for loop control variable
	int noOfBlanks; //variables to store the number of blanks

	cout<<"Enter the number of star lines (1 to 20)"
		<<"to be printed:";
	cin>>noOfLines;

	while (noOfLines < 0 || noOfLines > 20)
	{
		cout<<"Enter the number of star lines"
			<<"(1 to 20) to be printed:";
	     cin>> noOfLines;
	}

	cout << endl << endl;
	noOfBlanks = 30;

	for (counter = 1; counter <= noOfLines; counter++)
	{
		printStars (noOfBlanks, counter);
		noOfBlanks--;
	}

	system("pause");
	return 0;
}

void printStars(int blanks, int starsInLine)
{
	int count;

	for (count = 1; count <= blanks; count++)
		cout<<' ';
	for (count = 1; count <= starsInLine; count++)
		cout<<" *";
	cout << endl;
}
