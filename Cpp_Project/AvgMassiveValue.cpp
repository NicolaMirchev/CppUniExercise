// VectorExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int calculateAvg(int arr[], int size);


int main()
{

	const int MASSIVE_SIZE = 5;
	

	int array[MASSIVE_SIZE];


	for (int i = 0; i < MASSIVE_SIZE ; i++)
	{
		int value;
		cin >> value;
		array[i] = value;
	}

	cout << calculateAvg(array, MASSIVE_SIZE) << endl;

	return 0;
}

int calculateAvg(int arr[], int size)
{
	int totalSum = 0;

	for (int i = 0; i < size; i++)
	{
		totalSum += arr[i];
	}

	return totalSum / size;
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
