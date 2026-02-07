/*
    Arrays
    - Declare Empty Array
    - Add Elements To Array
    - Update Array Elements
    - Get Length Of Array With Sizeof
*/

#include <iostream>
using namespace std;

int main()
{

    int nums[4];

    nums[3] = 400;      // Last Elements
    nums[0] = 100;      // First Elements
    nums[1] = 200;      // Second Elements
    nums[2] = 300;      // Third Elements

    cout << "First Element 1: " << nums[0] << endl;
    cout << "Second Element 2: "<< nums[1] << endl;
    cout << "Third Element 3: " << nums[2] << endl;
    cout << "Last Element 4: "  << nums[3] << endl;


    nums[1] = 1000;      // Update Second Element 
    cout << "Element 2: " << nums[1] << endl;


    int anums [] = {100, 200, 300, 400, 500, 600};
    cout << "Array Elements Count Is " << sizeof(anums) / sizeof(anums[0]);         // 24 / 4 = 6


    return 0;
}