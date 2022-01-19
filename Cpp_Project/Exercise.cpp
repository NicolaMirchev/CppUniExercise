// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#define MAX 1000
using namespace std;

int main(int argc, const char* argv[]) {

	char text[MAX], * pt;

	cout << "Enter string to be encoded... " << endl;

	cin.getline(text, 999);
	pt = text;



	while (*pt != '\0')
	{
		// 25

		if (*pt >= 65 && *pt <= 90)
		{
			*pt = char(65 + (((*pt - 65) + 3)) % 25);
		}
		else if (*pt >= 97 && *pt <= 122)
		{
			*pt = char(97 + (((*pt - 97) + 3)) % 25);
		}
		else
		{
			*pt = *pt;
		}
		pt++;
	}

	cout << text;
}

