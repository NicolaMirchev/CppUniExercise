// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
void insEl(char ar[], int size, const char el);

int main()
{
    int number = 10;
    int secondNumber = 20;


    string name = "wtf";


    int *location = &number;
    cout << *location << endl;


    location = &secondNumber;
    cout << *location;

    cout << number << endl;

    return 0;
}

void insEl(char ar[], int size, const char el)
{
    int filledElements = strlen(ar);

    if (size - 1 > filledElements)
    {
        ar[filledElements] = el;
    }
    else
    {
        cout << "Capacity has already been reached" << endl;
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
