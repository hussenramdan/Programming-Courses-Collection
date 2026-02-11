/*
    Function
    - Passing Array As Parameter
*/

#include <iostream>
using namespace std;


    void calc(int nums[] , int count)
    {
        int result = 0;

        for (int i = 0; i < count; i++)
        {
            result += nums[i];
        }
        cout << "Result Is: " << result << endl;
    }

    int main()
    {

        int arrayOfNumber[] = {10, 20, 30, 40, 100};
        int numsSize = sizeof(arrayOfNumber) / sizeof(arrayOfNumber[0]);

        calc(arrayOfNumber, numsSize);


        return 0;
    }