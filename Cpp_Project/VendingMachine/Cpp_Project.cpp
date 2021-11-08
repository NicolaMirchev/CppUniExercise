// Cpp_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main()
{
	double enteredMoney;
	double price;
	cin >> price >> enteredMoney;


	if (enteredMoney < price)
	{
		cout << "Not enough money" << endl;
	}
	else if (enteredMoney == price)
	{
		cout << "Enought money. Change - 0." << endl;
	}
	else
	{
		double changeToPrint = enteredMoney - price;
		cout << "Change: " << changeToPrint << endl;
		enteredMoney *= 100;
		price *= 100;

		
		int change = enteredMoney - price;
		
		while (change > 0)
		{
			if (change / 5000 > 0)
			{
				int fiftyBancnot = change / 5000;
				cout << "Bancnot of 50 - " << fiftyBancnot << endl;
				change = change % 5000;
			}
			else if (change / 2000 > 0)
			{
				int twentyBancnot = change / 2000;
				cout << "Bancnot of 20 - " << twentyBancnot << endl;
				change = change % 2000;				
			}
			else if (change / 1000 > 0)
			{
				int tenBancnost = change / 1000;
				cout << "Bancnot of 10 - " << tenBancnost << endl;
				change = change % 1000;
			}
			else if (change / 500 > 0)
			{
				int five = change / 500;
				cout << "Bancnot of 5 - " << five << endl;
				change = change % 500;
			}
			else if (change / 200 > 0)
			{
				int two = change / 200;
				cout << "Bancnot of 2 - " << two << endl;
				change = change % 200;

			}
			else if (change / 100 > 0)
			{
				int one = change / 100;
				cout << "Bancnot of 100 - " << one << endl;
				change = change % 100;
			}
			else if (change / 50 > 0)
			{
				int fiftyCent = change / 50;
				cout << "Bancnot of 0.50 - " << fiftyCent << endl;
				change = change % 50;
			}
			else if (change / 20 > 0)
			{
				int twentyCent = change / 20;
				cout << "Bancnot of 0.20 - " << twentyCent << endl;
				change = change % 20;
			}
			else if (change / 10 > 0)
			{
				int tenCent = change / 10;
				cout << "Bancnot of 0.10 - " << tenCent << endl;
				change = change % 10;
			}
			else if (change / 5 > 0)
			{
				int fiveCent = change / 5;
				cout << "Bancnot of 0.5 - " << fiveCent << endl;
				change = change % 5;
			}
			else if (change / 2 > 0)
			{
				int twoCent = change / 2;
				cout << "Bancnot of 0.2 - " << twoCent << endl;
			}
			else 
			{
				cout << "Bancnot of 0.1 - " << change / 1 << endl;
				change = change % 1;
			}

			

		}

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
