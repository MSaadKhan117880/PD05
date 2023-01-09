#include<iostream>
using namespace std;

float taxCalculator(char type, float price);

int main()
{
	float itemPrice;
	float finalPrice;
	char type;

	cout << "Enter the Vehicle Code: ";
	cin >> type;
	cout << "Enter the Price of the Vehicle: ";
	cin >> itemPrice;

	finalPrice = taxCalculator(type, itemPrice);
	if (type == 'M')
	{
		cout << "Motorcycle " << finalPrice << "$" << endl;
	}
	if (type == 'E')
	{
		cout << "Electric " << finalPrice << "$" << endl;
	}
	if (type == 'S')
	{
		cout << "Sedan " << finalPrice << "$" << endl;
	}
	if (type == 'V')
	{
		cout << "Van " << finalPrice << "$" << endl;
	}
	if (type == 'T')
	{
		cout << "Truck " << finalPrice << "$" << endl;
	}

	return 0;
}

float taxCalculator(char type, float price)
{
	float taxAmount;
	float finalPrice;

	if (type == 'M')
	{
		taxAmount = price * (6.0 / 100.0);
		finalPrice = price + taxAmount;
		return finalPrice;
	}
	if (type == 'E')
	{
		taxAmount = price * (8.0 / 100.0);
		finalPrice = price + taxAmount;
		return finalPrice;
	}
	if (type == 'S')
	{
		taxAmount = price * (10.0 / 100.0);
		finalPrice = price + taxAmount;
		return finalPrice;
	}
	if (type == 'V')
	{
		taxAmount = price * (12.0 / 100.0);
		finalPrice = price + taxAmount;
		return finalPrice;
	}
	if (type == 'T')
	{
		taxAmount = price * (15.0 / 100.0);
		finalPrice = price + taxAmount;
		return finalPrice;
	}
}