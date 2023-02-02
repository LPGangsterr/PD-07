#include <iostream>
using namespace std;
main()
{
	int Number;
	cout  <<  "Enter any number: ";
	cin  >>  Number;
	for (int i = Number; i >= 1; i = i - 1)
	{
		for (int j = 1; j <= i; j = j + 1)
		{
			cout << "*";
		}
			cout << endl;
	}
}