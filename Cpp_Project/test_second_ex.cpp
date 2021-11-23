
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int digit_transformation(int number)
{	

	string resultString;

	while (number != 0)
	{
		if ((number % 10) % 2 == 0)
		{
			resultString += to_string((number % 10) / 2);
		}
		else
		{
			resultString += to_string((number % 10) - 1);
		}
		number /= 10;
	}

	reverse(resultString.begin(), resultString.end());

	stringstream ss(resultString);
	int result = 0;
	ss >> result;

	return result;
}

int main()
{
	int number;
	cin >> number;
	

	while (to_string(number).length() != 4)
	{
			cout << "Number must be 4 digits" << endl;
			cin >> number;	
	}
	cout << digit_transformation(number) << endl;
	return 0;

}

