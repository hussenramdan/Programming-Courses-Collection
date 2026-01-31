/*
    Primitive Data Types
    - Modifiers
    --- Modify The Length Of Data => See Limits
    
    ----- Signed [int , char]
    ---------- Store Positive , Negative Integers And 0
    ---------- int Is Signed By Default

    ------- Unsigned [int , char]
    ---------- Store Only Positive 

    ------- short [int]
    ------------- can be short instead of  short int

    ------- long [int , double]
    ---------- store maximum value
    ---------- can be long instead of long int

    Type Aliases
    - using identifier = type;
    - typedef unsigned long ul;
    */

#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int age = 300;
    cout << sizeof(age) << "\n";        // 4 Bytes

    short int new_age = 300;
    cout << sizeof(new_age) << "\n";    // 2 Bytes

    short last_age = 300;
    cout << sizeof(last_age) << "\n";    // 2 Bytes

    cout << sizeof(short int ) << "\n";     // 2
    cout << sizeof(short) << "\n";          // 2
    cout << sizeof(long int) << "\n";       // 4
    cout << sizeof(long) << "\n";           // 4
    cout << sizeof(long long int) << "\n";  // 8
    cout << sizeof(long) << "\n";           // 8

    int num_one = 100;
    cout << num_one << "\n";

    signed int num_two = 0;
    cout << num_two << "\n";

    unsigned int num_three = 100;
    cout << num_three << "\n";

    // unsigned num_four = -10;
    // cout << num_four << "\n";   //problem

    long long int my_number = 100010001000;
    cout << my_number << "\n";

    using bignum = long long int;
    bignum my_number2= 200020002000;
    cout << my_number2 << "\n";


    typedef long long int bignum2;
    bignum2 my_number3 = 300030003000;
    cout << my_number3 << "\n";

    return 0;
}