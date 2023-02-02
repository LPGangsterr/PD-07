#include <iostream>
using namespace std;
void Amplify(int Number)
{
	for(int i = 1;i <= Number;i++)
	{
		if(i % 4 == 0)
		{
			int Amplify;
			cout  <<  i  <<  " is exactly divisible by 4. So,it will be "  <<  i  <<  "* 10 =";
			Amplify = i * 10;
			cout  <<  Amplify  <<  endl;
		}
	}
}
main()
{
	int Number;
	cout  <<  "Enter any number: ";
	cin  >>  Number;
	Amplify(Number);
}
