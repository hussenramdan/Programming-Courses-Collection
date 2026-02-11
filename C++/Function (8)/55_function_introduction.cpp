/*
    Function
    - DRY
    - User Defined and Built-In
    - Syntax

    - return Data Type FunctionName (Param 1, Param 2, Param 3 )
    {
        / / Function Body Contain Block Of Code
    }

    - Example
    - Why We Use Functions
    - Declare A Function And Call It
*/

#include <iostream>
using namespace std;

// Declare Functions
void sayHello()
{
    cout << "Hi Osama.\n";
}

int main()
{

    cout << "Hi Ahmed.\n";
    sayHello();
    cout << "Hi Sayed";

    return 0;
}