/*
    Vector
    - Iterator
    --- Traversing
    ------ begin()
    ------ end()
    ------ advance()
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator first = nums.begin();
    vector<int>::iterator last = nums.end() - 1;

    cout <<"First Element Is: " << *first << endl;                        // 10
    cout <<"Second Element Is: " << first[1] << endl;                    // 20 
    cout <<"Third Element Is: " << first[2] << endl;                     // 30

    cout << "Last Element Is: " << *last << endl;                       // 40
    // cout << "Before Last Element Is: " << *last - 1 << endl;         // 39
    cout << "Before Last Element Is: " << *(last - 1) << endl;         // 30

    advance(first, 3);
    cout << "First ELement Is: " << *first << endl;                     // 40

    advance(first, -2 );
    cout << "First ELement Is: " << *first << endl;                     // 20
    return 0;
}