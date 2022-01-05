// VectorExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

	string first_numbers;

	getline(cin, first_numbers);

	vector<char> firstV (first_numbers.begin(), first_numbers.end());

	string second;
	getline(cin, second);

	vector<char> secondV(second.begin(), second.end());

	vector <char> resultVector(firstV.size() + secondV.size());


	bool endOFtheFirst = false;
	for (unsigned i = 0; i < resultVector.size(); i++)
	{
		if (!endOFtheFirst)
		{
		resultVector[i] = firstV[i];

		if (i == firstV.size() - 1)
		{
			endOFtheFirst = true;
		}
		}
		else
		{
			resultVector[i] = secondV[i - firstV.size()];
		}
	}

	for (unsigned i = 0; i < resultVector.size(); i++)
	{
		cout << resultVector[i] << endl;
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
