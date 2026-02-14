/*  
    Function
    - Returen Statement
    --- Return Vs No Retrun Example
    --- Return As Value In Variable
    --- Main Function Return Test
    --- Nothing After Return
    --- Void With Retrun ...! Why ?
*/

#include <iostream>
using namespace std;

    // void calc(int n1, int n2)
    // {
    //     cout << n1 + n2 << endl;
            // return 0;
    // }

    int calc(int n1 , int n2)
    {
            cout << "Operation Is Done\n";
            return n1 + n2; 
            cout << "Will Not Show";
    }


int main()
{
    
    // calc(10,20);
    int result = calc(10,20);
    cout << result * 5 << endl;
    cout << result + 20;


    return 0;
}