// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#define MAX 1000
using namespace std;

bool checkISBN(char []);

int main(int argc, const char* argv[]) {

	char input[MAX];
	cout << "Enter ISBN13 code to be validated" << endl;

	cin.getline(input, 999);

	if (checkISBN(input))
	{
		cout << "Correct";
	}
	else
	{
		cout << "Incorrect" << endl;
	}


}


bool checkISBN(char input[]) {
	const int arrayL = 13;

	int numbers[arrayL];

	char* pt;
	pt = input;
	int counter = 0;

	while (*pt != '\0')
	{
		if (*pt != '-')
		{
			numbers[counter++] = (int)*pt-48;			
		}		
		pt++;
	}
	
	int sum = 0;

	for (size_t i = 0; i < arrayL; i++)
	{
		if (i % 2 == 1 )
		{
			sum += 3 * numbers[i];
		}
		else
		{
			sum += numbers[i];
		}
	}

	if (sum % 10 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
