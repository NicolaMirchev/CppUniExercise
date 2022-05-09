#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int A[3][4] = { {0, 8, 9, 4} ,
					{3, 0, 1, 7 },
					{6, 4, 7, 2} };

	int B[4][2] = { {1, 3},
					{8 ,4},
					{9, 1},
					{4, 7} };


	int resultMatrix[3][2];

	for (int rows = 0; rows < 3; rows++)
	{
		for (int cols = 0; cols < 2; cols++)
		{
			int currentCellResult = 0;
			for (int  i = 0; i < 4; i++)
			{
				currentCellResult += A[rows][i] * B[i][cols];
			}

			resultMatrix[rows][cols] = currentCellResult;
		}
	}

	for (int rows = 0; rows < 3; rows++)
	{
		for (int  cols  = 0; cols  < 2; cols ++)
		{

			cout << resultMatrix[rows][cols] << " ";

		}
		cout << endl;
	}



	return 1;
}