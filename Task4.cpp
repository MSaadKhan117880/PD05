#include<iostream>
using namespace std;

int main()
{
	int hoursNeeded;
	int hours;
	int days;
	float daysf;
	int workers;

	cout << "Enter the Number of Hours Needed: ";
	cin >> hoursNeeded;
	cout << "Enter the Number of Days Needed: ";
	cin >> days;
	cout << "Enter Number of Workers: ";
	cin >> workers;

	daysf = days * (90.0 / 100.0);
	hours = daysf * 10;
	hours = hours * workers;

	if (hours < hoursNeeded)
	{
		cout << "Not Enough Time! " << hoursNeeded - hours << " hours Needed." << endl;
	}
	if (hours > hoursNeeded)
	{
		cout << "Yes! " << hours - hoursNeeded << " hours Left." << endl;
	}


	return 0;
}