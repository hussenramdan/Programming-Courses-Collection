/*
    Varibles Naming Rules & Best Practices

  - Naming Rules:
    -- Must Be Unique
    -- Case Sensitive
    -- Cannot Start With Number
    -- Number Or Letters Or Underscore
    -- No White Spaces Or Special Characters
    -- Reserved Keywords "Class, Public"


    Best Practices
    -- Related Names
    -- Write Style
*/

#include <iostream>
using namespace std;

int main()
{
  
    int price = 100;         // Declare A New Variable
    price = 200;            // Update The Value
    int Price = 400;
    cout << price;
    cout << "\n===========\n";
    int n_um = 10;
    cout << n_um;
    cout << "\n===========\n";
    int _num_ber_ = 100;
    cout << _num_ber_;
    cout << "\n===========\n";
    int publics = 1000;
    cout << publics;
    cout << "\n===========\n";
    int OSAMA = 500;    // Bad Styl
    cout << OSAMA;
    cout << "\n===========\n";
    int x = 1000;
    cout << x;

    return 0;
}