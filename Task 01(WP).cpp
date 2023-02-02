#include <iostream>
using namespace std;
main()
{
	int Number;
	cout  <<  "Enter any number: ";
	cin  >>  Number;
	for (int i = 1; i <= Number; i = i + 1)
	{
		for (int j = 1; j <= i; j = j + 1)
		{
			cout << "*";
		}
			cout << endl;
	}
}