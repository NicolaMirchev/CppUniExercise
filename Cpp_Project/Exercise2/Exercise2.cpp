// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void PrintMatrix(double *a, int rows, int cols);
void fillMatrix(double* a, int rows, int cols);
void findLargestCol(double* a, int rows, int cols);
void increaseEvenElValue(double* a, int rows, int cols);

int main()
{
	const int size = 10;

	double matrix[size][size];

	fillMatrix(matrix[0], size, size);
	PrintMatrix(matrix[0], size, size);
	findLargestCol(matrix[0], size, size);
	increaseEvenElValue(matrix[0], size, size);
	PrintMatrix(matrix[0], size, size);
	
}

void PrintMatrix(double* a, int rows, int cols)
{
	for (int i = 0;i < rows;i++)
	{
		for (int j = 0;j < cols;j++)
		{
			cout << *(a + i * rows + j) << "  ";
		}
		cout << "\n";
	}
}
void fillMatrix(double* a, int rows, int cols)
{
	for (int i = 0;i < rows;i++)
	{
		for (int j = 0;j < cols;j++)
		{
			*(a + i * rows + j) = i + j - j * j;
		}
		
	}
}
void findLargestCol(double* a, int rows, int cols)
{
	int largestSum = 0;
	int largerstCol = 0;
	for (int i = 0;i < cols;i++)
	{
		int currentSum = 0;
		int currentColNumber = i;
		for (int j = 0;j < rows;j++)
		{
			currentSum += *(a + j * cols + i);
		}
		if (currentSum > largestSum)
		{
			largestSum = currentSum;
			largerstCol = currentColNumber;
		}
	}
	cout << "Largest col is col with index " << largerstCol << " with sum " << largestSum << endl;
}
void increaseEvenElValue(double* a, int rows, int cols)
{
	int diagonalSum = 0;

		for (int i = 0;i < rows;i++)
		{
			diagonalSum += *(a + i * rows + i);			
		}
		
		for (int i = 0;i < rows;i++)
		{
			for (int j = 0;j < cols;j++)
			{
				int currentNumValue = *(a + i * rows + j);
				if ( currentNumValue % 2 == 0)
				{
					*(a + i * rows + j) += diagonalSum;
				}
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
