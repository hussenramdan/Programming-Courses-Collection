/*
    Loop
    - Loop For Advanced Trainings
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600 , 700};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    // Method 1
    // for(int i = 0 ; i < numsSize ; i += 2)
    // {
    //     cout << nums[i] << endl;
    // }

    // Method 2
    // for(int i = 0 ; i < numsSize ; i++)
    // {
    //     cout << nums[i] << endl;
    //     i++;
    // }

    // Method 3
    // 600 500 400 300 
    for(int i = 5 ; i >= 2 ; i--)
    {
        cout << nums[i] << endl;
    }

    // Method 4
    for(int i = numsSize - 1 ; i > 1 ; i--)
    {
        cout << nums[i] << endl;
        i--;
    }

    // Method 5
    int i = numsSize - 2 ;
    i > 1 ;
    for(;;)
    {
        cout << nums[i] << endl;
        i--;
        if(i <= 1)
        {
            break;
        }
    }

    return 0;
}