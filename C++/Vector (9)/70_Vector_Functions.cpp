/*  
    Vector 
    - size()      < Current Number Of Elements
    - max_size()  < Maximum Number Of Elements
    - capacity()  < Storage Capacity
    - front()     < First Element
    - back()      < Last Element
    - clear()     < Clear All Elements From Vector
    - empty()     < Check If Vector Is Empty Or Not 
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};

    cout << nums.size() << endl;
    cout << nums.max_size() << endl;
    cout << nums.at(0) << endl;

    cout << nums.capacity() << endl;

    cout << nums.front() << endl;
    cout << nums.back() << endl;
    cout << nums.at(nums.size() - 1) << endl;

    nums.clear();
    cout << nums.size() << endl;

    nums.push_back(100);

    if (nums.empty())
    {
        cout << "Vector Is Empty\n";
    }
    else
    {
        cout << "Vector Is Not Empty\n";
    }

    return 0;
}
