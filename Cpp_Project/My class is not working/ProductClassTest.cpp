// ProductClassTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Product.cpp"

using namespace std;



int main()
{
    vector<Product> products;
    Product best_product;
    int best_index = -1;

    bool more = true;
    while (more)
    {
        Product next_product;
        next_product.read();
        products.push_back(next_product);

        if (next_product.is_better_than(best_product))
        {
            best_index = products.size() - 1;
            best_product = next_product;
        }

        cout << "More data? (y/n) ";
        string answer;
        getline(cin, answer);
        if (answer != "y") more = false;
    }

    for (int i = 0; i < products.size(); i++)
    {
        if (i == best_index) cout << "best value => ";
        products[i].print();
    }
    return 0;
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
