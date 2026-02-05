/*
Primitive Data Types
    - Float => Floating Point Number
    --- Test Integer Value In Float Variable
    --- We Make Sure Its float Not Double By Adding Suffix "f" or "F"
    --- Test With Aout
    --- 7 Decimal Precision
    
    - double => Double The Float
    --- 15 Decimal Precison
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    num = 20.5;
    cout << sizeof(num);    // 4
    cout << num << endl;    // 20

    double dob = 10;
    dob = 20.5;
    cout << sizeof(dob);    // 8
    cout << dob << endl;    // 20.5

    float fl = 10.5f + 9.5f;
    cout << sizeof(fl);     // 4
    cout << fl << endl;     // 20

    auto mix = 10.f; 
    return 0 ;
}