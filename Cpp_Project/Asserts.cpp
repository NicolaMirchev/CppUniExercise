#include <iostream>
#include <cassert>

using namespace std;

void CalculateInterestPerYear(int value, int porcentage)
{
	cout << value + value * porcentage / 100;
}

int main()
{
	cout << "Enter sum and a porcentage" << endl;

	int sum, porcentage;
	
	cin >> sum >> porcentage;

	assert(sum > 0);
	assert(porcentage > 0);
	CalculateInterestPerYear(sum, porcentage);


	return 0;
}