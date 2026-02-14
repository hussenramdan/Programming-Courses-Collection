/*  
    Vector

    - Access
    --- at()
    --- Square Brackets [] < Do Not Use

    - Add
    --- push_back => Add Elements To The End

    - Update
    --- at()

    - Delete
    --- pop_back() => Remove Element From The End
*/

#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{

    vector<int> nums = {10, 20, 30};
    cout << nums.at(2) << endl;
    cout << nums[2] << endl;

    nums.push_back(40);
    cout << nums.size() << endl;        // 4
    cout << nums.at(3) << endl;         // 40

    nums.at(3) = 100;
    cout << nums.at(3) << endl;         // 100

    nums.push_back(500) ;
    cout << nums.size() << endl;        // 5
    cout << nums.at(4) << endl;         // 500

    nums.pop_back();                    // Delete Number 5
    cout << nums.size() << endl;       // 4
    
    return 0;
}