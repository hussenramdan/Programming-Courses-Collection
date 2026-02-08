/*
    Arrays
    - Useful Methods
    --- at
    --- front
    --- back
    --- fill
    --- size
    --- empty
*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int , 4> nums = {100, 200, 300, 400};
    cout << nums[0] << endl;                // 100
    cout << nums[3] << endl;                // 400
    cout << nums.at(1) << endl;             // 200
    cout << nums.front() << endl;           // 100
    cout << nums.back() << endl;            // 400
    cout << nums.size() << endl;            // 4
    cout << nums.empty() << endl;           // 0 => False

    return 0;
}