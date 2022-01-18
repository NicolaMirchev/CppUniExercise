// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int value(char i) 
{
	if (i == 'M')
	{
		return 1000;
	}
	else if (i == 'D')
	{
		return 500;
	}
	else if (i == 'C')
	{
		return 100;
	}
	else if (i == 'L')
	{
		return 50;
	}
	else if (i == 'X')
	{
		return 10;
	}
	else if (i == 'V')
	{
		return 5;
	}
	else if (i == 'I')
	{
		return 1;
	}
	else
	{
		return -1;
	}
}


int main()
{
	string input;
	cout << "Enter a number in Rimski version" << endl;

	cin >> input;
	int output = 0;


	while (input != "END")
	{


		for (unsigned i = 0; i < input.size(); i++)
		{
			int currentNum = value(input[i]);

			if (i + 1 < input.size())
			{

				int secondValue = value(input[i + 1]);

				if (currentNum >= secondValue)
				{
					output += currentNum;
				}
				else
				{
					output += secondValue - currentNum;
					i++;
				}
			}
			else
			{
				output += currentNum;
			}
		}
		cout << "Your number is " << output << endl;
		cin >> input;
		output = 0;
	}




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
