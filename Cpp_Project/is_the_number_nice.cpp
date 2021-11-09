#include <iostream>

using namespace std;

bool is_the_number_smart(int number)
{
	while (number > 0)
	{
		if ((number % 10) % 2 == 0)
		{
			number /= 10;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int number;
	cin >> number;

	if (is_the_number_smart(number))
	{
		cout << "True!!" << endl;
	}
	else
	{
		cout << "False!" << endl;
	}
	return 0;

}