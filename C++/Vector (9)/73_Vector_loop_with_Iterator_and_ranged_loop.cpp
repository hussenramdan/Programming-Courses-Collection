/*
    Vector
    - Iterator
    --- Loop With Iterator
    --- Ranged Loop With For
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator it;

    // Loop With Iterator
    for (it = nums.begin(); it != nums.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "===================\n";

    // Range-Based For Loop (Vector)
    for (int val : nums)
    {
        cout << val << endl;
    }

    cout << "=====================\n";

    // Range-Based For Loop (Array)
    int number[5] = {20, 40, 60, 80, 100};
    for (int mynumber : number)
    {
        cout << mynumber << endl;
    }

    return 0;
}
