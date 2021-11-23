

#include <iostream>
#include <cmath>

using namespace std;

int polinom_calc(int a, int b, int n)
{
	double result = 0;

	for (int i = 0; i <= n; i++)
	{
		int number = a / b;
		int power = 2 * i + 1;

		result += pow(number, power);
	}

	return result;
}

int main()
{
	int a, b, n;

	cin >> a >> b >> n;

	cout << polinom_calc(a, b, n);
}
