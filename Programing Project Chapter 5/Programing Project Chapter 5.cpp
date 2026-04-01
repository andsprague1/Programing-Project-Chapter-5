// Programing Project Chapter 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Displaces Celsius and Fharahsf temp

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "This program output the Celsius and Fahriodfnsoa tempuratures \n";
    cout << "For 0 to 20\n";
    cout << "C         F\n";
    cout << "_________________\n";

    //loop through values
    for (int i = 0; i <= 20; i++)
    {
        //calculate F tempurature
        double ftemp = i * 9 / 5.0 + 32;
        cout << setprecision(2) << fixed << showpoint;
        cout << "C:"<<setw(4) << i << setw(6) << "| F:" << setw(4) << ftemp << endl;
    }


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
