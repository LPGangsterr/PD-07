#include <iostream>
using namespace std;
main()
{
	int period;
	int treated = 0;
	int untreated = 0;
	int doctors = 7;
	int day = 0;
	cout  <<  "Enter period: ";
	cin >> period;
	for (int i = 0; i < period; i++)
	{
        	int patients;
		cout  <<  "Enter number of patients: ";
		cin >> patients;
		if (patients <= doctors)
		{
			treated = treated + patients;
        	}
		else
		{
			treated = treated + doctors;
			untreated = untreated + patients - doctors;
        	}
        	day = day +1;
        	if (day % 2 == 0)
		{
			if (treated < untreated)
			{
                		doctors = doctors + 1;
            		}
        	}
	}
	cout << "Treated patients: " << treated << "." << endl;
	cout << "Untreated patients: " << untreated << "." << endl;
}
