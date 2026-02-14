/*
    Pointers

    What Are Pointers ?
    --- A Variable That Stores Memory Address Of Another Variable

    Why We Need Pointers ?
    --- Iterate On Elements In Data Structures Like Array
    --- Pass Variable To Function By Reference
    --- Dynamic Memory Allocation

    Benefits Of Using Pointers
    --- Reduce Code And Increase Performance

    Note
    --- There Are Raw Pointers And Smart Pointers

    Syntax
    --- Declare A Pointer
    --- Print Variable Memory Address => Address Of Operator [&]
    --- Print Value That Pointer Points To => Dereference Operator [*]
    --- Change Variable Value Using Pointer
*/

#include <iostream>
using namespace std;

int main()
{
    int nums = 100;
    int* ptr = &nums;

    cout << "Value : " << nums << endl;
    cout << "Address : " << &nums << endl;
    cout << "Address : " << ptr << endl;
    cout << "Value : " << *ptr << endl;

    *ptr = 200;

    cout << "Value : " << nums << endl;
    cout << "Address : " << &nums << endl;
    cout << "Address : " << ptr << endl;
    cout << "Value : " << *ptr << endl;

    return 0;
}
