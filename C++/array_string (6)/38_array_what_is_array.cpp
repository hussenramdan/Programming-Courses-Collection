/*
    Array
    - What Is Array ?
    --- Conection Of Elements Of The Same Type
    --- Placed in contiguous Memory Locations
    --- Referenced By Index Stared Form 0
    - Why We Need Array ?
    - Creating Array Syntax
    - Check Array Size
    - Ceate Array Without Size
*/

#include <iostream>
using namespace std;

int main()
{

    int nums[4] = {100, 200, 300, 400};
    cout << sizeof(int) << endl;            // 4 Bytes
    cout << sizeof(nums) << endl;           // 16 Bytes


    double dos[4] = {100, 200, 300};
    cout << sizeof(double) << endl;         // 8 Bytes
    cout << sizeof(dos) << endl;           // 32 Bytes


    int rands[] {100, 5000, 950};

    return 0;
}