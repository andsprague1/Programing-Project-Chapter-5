// Programing Project Chapter 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Displaces Celsius and Fharahsf temp

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//create vars to hold highest and lowest
	int high=0;
	int low=0;
	int input;

	cout << "Enter numbers, -99 to end";

	cin >> input;
	high = input;
	low = input;
	while (input != -99)
	{
		if (input > high)
		{
			high = input;
		}
		if (input < low)
		{
			low = input;
		}

		cin >> input;
	}

	cout << "Highest:" << high << endl;
	cout << "Lowest:" << low << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
