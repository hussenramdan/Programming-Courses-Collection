/*
    Arrays
    - Access Array Elements
    - Check Element Location
*/

#include <iostream>
using namespace std;

int main()
{

    int nums[]{100, 200, 300};
    
    cout << "First Elements: " << nums[0] << endl;
    cout << "Last Elements: " << nums[2] << endl;       // Number Of Elements - 1

    cout << "Location: " << &nums[0] << endl;
    cout << "Location: " << &nums[1] << endl;
    cout << "Location: " << &nums[2] << endl;

    return 0;
}