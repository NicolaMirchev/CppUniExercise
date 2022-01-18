// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#define MAX 1000
using namespace std;

int main(int argc, const char* argv[]) {
    
	int arr[MAX] = { 0, 1 };
	
	int j;

	for (int i = 2; i < MAX; i++)
	{
		if (arr[i] == 0)
		{
			arr[i] = i;

			j = i * i;
			for (int k = j; k < MAX; k += i)
			{
				arr[k] = 1;
			}
		}
	}
	for (int  i = 2; i < MAX; i++)
	{
		if (arr[i] != 1)
		{
			cout << i << ", ";
		}
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
