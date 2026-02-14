/*  
    Function
    - Built In Function
    --- Algorithm Header
    ------ min
    ------ max
    ------ count
    
    - Create 3 Applictions
    --- Find Minimum Number
    --- Find Maximum Number
    --- Count Number Occurance
    */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{   

    cout << min(10, -20) << endl;                             // -20
    cout << min(10, 20) << endl;                             // 10
    cout << min('a', 'c') << endl;                           // a
    cout << min('a','C') << endl;                          // C
    cout << min({10, 20, -20, 30, -100, 100}) << endl;        // -100
    cout << "========================\n";

    cout << max(10 , -20) << endl;
    cout << max(10, 20) << endl;
    cout << max('a','c') << endl;
    cout << max('a','C') << endl;
    cout << max({10, 20, -20, 30, -100, 100, -50}) << endl;
    cout << "==========================\n";

    int nums[] = {10, 20, -20, 30, -100, 100, -50};
    int numsSize = size(nums);
    int checkMinNum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < checkMinNum)
        {
            checkMinNum = nums[i];
        }
        cout << checkMinNum << endl;
    }

    

    int numsTwo[] = {10, 20, 10, 10, 13, 15, 100, 20, 10};
    int numsTwoSize = size(numsTwo);
    int counter = 0;
    int choosenNum = 10;

    for (int i = 0; i < numsTwoSize; i++)
    {
        if(numsTwo[i] == choosenNum)
        {
            counter++;
        }
    }

    cout << choosenNum << " Found " << counter << " Times";

    return 0;
}
