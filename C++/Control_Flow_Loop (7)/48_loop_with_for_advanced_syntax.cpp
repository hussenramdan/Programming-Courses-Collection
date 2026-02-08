/*
    Loop
    Loop For Advanced Syntax
*/

#include <iostream>
using namespace std;

int main()
{

    int nums[] = {100, 200, 300, 400, 500, 600};
    int numcount = sizeof(nums) / sizeof(nums[0]);
    cout << numcount << endl;                        // 6

    for(int i = 0 ; i < numcount ; i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}