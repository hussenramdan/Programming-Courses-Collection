/*
condition Flow 
- Nested If Condition
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    int points = 1500;

    if (age >= 18)
    {
        cout << "Welcome Your Age Is Ok" << endl;
    if (points >= 1000)
    {
        cout << "You Are VIP" ;
    }
    }

    return 0;
}