/*
    Loop
    - Loop With For
    - Lop On Array

    Syntax
    for(int, Condition, Update)
    {
        \\ Block Of Code
    }
*/

#include <iostream>
using namespace std;

int main()
{

    int num = 0;
    cout << num << endl;               // 0
    num++;
    cout << num << endl;               // 1
    num++;
    cout << num << endl;               // 2
    num++;
    cout << num << endl;               // 3
    num++;
    cout << num << endl;               // 4


    for (int i = 0; i < 4 ; i++)
    {
        cout << i << endl;
    }

    int nums[4] = {100, 200, 300, 400};
    cout << nums[0] << endl;                // 100
    cout << nums[1] << endl;                // 200
    cout << nums[2] << endl;                // 300
    cout << nums[3] << endl;                // 400

    for(int index = 0 ; index < 4 ; index++)
    {
        cout << index << endl;              // 0 > 1 > 2 > 3
        cout << nums[index] << endl;        // 100 > 200 > 300 > 400           
    }

    return 0;
}