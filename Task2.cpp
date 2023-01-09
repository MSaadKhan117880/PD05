#include<iostream>
using namespace std;

float FindVolume(float, float, float, string);

int main()
{
	float volume;

	float length;
	float width;
	float height;
	string unit;

	cout << "Enter the unit in which you want to write the values: ";
	cin >> unit;

	cout << endl;

	cout << "Enter length of the Pyramid: ";
	cin >> length;
	cout << "Enter width of the Pyramid: ";
	cin >> width;
	cout << "Enter height of the Pyramid: ";
	cin >> height;

	volume = FindVolume(length, width, height, unit);

	cout << "Volume is "<<volume;
	cout << " cubic " << unit << endl;

	return 0;
}

float FindVolume(float length, float width, float height, string unit)
{
	float volume;
	if (unit == "millimeters")
	{
		volume = (length * width * height) / 3.0;
		volume = volume * 1000000000;
		return volume;
	}
	if (unit == "centimeters")
	{
		volume = (length * width * height) / 3.0;
		volume = volume * 1000000;
		return volume;
	}
	if (unit == "meters")
	{
		volume = (length * width * height) / 3.0;
		return volume;
	}
	if (unit == "kilometers")
	{
		volume = (length * width * height) / 3.0;
		volume = volume * 0.000000001;
		return volume;
	}
}