/*
    Condition Flow
    - Ternary Operator
    
    Syntax
    (Condition Is True) ? True : False;
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age = 25;

    if (age >= 18)
    {
        cout << "Welcome Your Age Is Ok" << endl;
    }
    else
    {
        cout << "Your Age Is Not Ok" << endl;
    }

    cout << (age >= 18 ? "Welcome Your Age Is Ok " : "Age Is Not Ok");

    string msg = age >= 18 ? "Welcome Your Age Is Ok " : "Age Is Not Ok";

    cout << msg ;

    return 0;
}