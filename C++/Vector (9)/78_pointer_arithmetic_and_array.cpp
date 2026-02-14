/*  
    Pointers
    -- Pointter Arithmetic
    -- Pointer And Array
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[]{10,20,30,40};

    cout << nums << endl;           // 1st Element => Memory Address
    cout << &nums[0] << endl;       // 1st Element => Memory Address

    cout << nums[0] << endl;        // 1st Element => 10
    cout << *nums << endl;          // 1st Element => 10

    cout << nums[1] << endl;         // 1st Element => 20
    cout << *(nums + 1) << endl;    // 1st Element => 20



    int* ptr = nums;

    cout << ptr << endl;           // 1st Element => Memory Address
    cout << *ptr << endl;           // 1st Element => 10
    
    ptr++;
    cout << ptr << endl;           // 2nd Element => Memory Address
    cout << *ptr << endl;           // 2nd Element => 20

    ptr += 3;
    cout << ptr << endl;           // last Element => Memory Address
    cout << *ptr << endl;           // last Element => 50

    ptr --;
    cout << ptr << endl;            // Before Last Element => Memory Address
    cout << *ptr << endl;           // Before Last Element => 40 



    return 0;
}