/*  
    Function
    - Math Function
    --- pow
    --- fmod
    --- ceil
    --- floor
    --- round
    --- trunc
*/


#include <iostream>
#include <cmath>
using namespace std;




int main()
{
    
    cout << pow(2, 4) << endl;          // 16 
    cout << 2* 2* 2* 2 << endl;         // 16
    cout << 11 % 2 << endl;             // 1
    // cout << 11.5 % 2 << endl;        // Error
    cout << fmod(11.5, 2) << endl;      // 1.5  
    cout << ceil(9.1) << endl;          // 10
    cout << floor(9.9) << endl;         // 9
    cout << round(9.5) << endl;         // 10
    cout << round(9.4) << endl;         // 9
    cout << round(9.49) << endl;        // 9
    cout << trunc(9.9) << endl;         // 9
    cout << trunc(9.5) << endl;         // 9
    cout << trunc(9.1) << endl;         // 9


    return 0;
}