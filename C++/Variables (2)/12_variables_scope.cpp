/*
    Varibles Scope
    - Global Scope
    - Local Varible
*/

#include <iostream>
using namespace std;

int a = 100 ;    // Gloable Variable


int second()
{
    int b = 200;  // Local Variable
    cout << a << " Coming From Secomd Function\n ";
    cout << a << " Coming From Secomd Function\n ";
    return 0;
}

int main()
{

    cout << a << " Coming From Main Function\n";
    // cout << b << " Coming From Main Function\n";    // Undefined

    second();
    return 0;
}