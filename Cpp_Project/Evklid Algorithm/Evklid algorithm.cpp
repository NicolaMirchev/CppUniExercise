#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char*
    argv[]) {
    
    int a, b;
    cin >> a >> b;

    int min, max;
    if (a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }

    while (min != 0)
    {
        int temp;
        temp = max % min;
        
        cout << temp << " is the the new min" << endl;
        cout << min << " is the new max" << endl;
        max = min;
        min = temp;
    }

    cout << "Nod is " << max << endl;
    cout << "Nok is " << a * b / max;


}