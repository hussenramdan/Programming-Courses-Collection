/*
    Primitive Data Types
    - int => Integer
    --- Store Integers Only
    --- Test Floating Point vs Int
    --- Store from INT_MIN to INT_MAX
    --- Check Limits Header File <limits.h>
    --- Test Size Of Data Types Using sizeof

    = Assignment Operator
*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int num_one = 100;
    int num_two = -500;
    int num_three = 0;
    int num_four = true; // true = 1

    cout << num_one << endl;
    cout << num_two << endl;
    cout << num_three << endl;
    cout << num_four << endl;

    cout << INT_MIN << endl;
    cout << INT_MAX << endl;

    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(bool) << endl;

    int last_num = 10.5; // Will store 10 only
    cout << last_num << endl;

    return 0;
}
