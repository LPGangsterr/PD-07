#include <iostream>
using namespace std;
void upperTriangle(int Number)
{
	for (int i = 1; i <= Number; i = i + 1)
	{
		for (int j = 1; j <= (Number - i); j = j + 1)
		{
			cout << " ";
		}
		for (int k = 1;k <= i;k++)
		{
			cout  <<  "*";
		}
		cout  <<  endl;
	}
}
void lowerTriangle(int Number)
{
	for (int i = Number; i >= 1; i = i - 1)
	{
		for (int j = 1; j <= (Number - i); j = j + 1)
		{
			cout << " ";
		}
		for (int k = 1;k <= i;k++)
		{
			cout  <<  "*";
		}
		cout  <<  endl;
	}
}
main()
{
	int Number;
	cout  <<  "Enter any number: ";
	cin  >>  Number;
	upperTriangle(Number);
	lowerTriangle(Number);
}