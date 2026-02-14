/*
    Vector
    - Use Iterator
    --- sort
    --- count
    --- Reverse
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> num = {10, 500, 60, -20, 20, 10, 20};

    int val = 20;
    int countTime = count(num.begin(), num.end(), val);

    cout << "Number " << val << " Found " <<  countTime << " Time" << endl;


    for (int &n : num)
    {
        cout << n << endl;
    }
    cout<< "====================\n";

    sort(num.begin(), num.end());
    for(int &n : num)
    {
        cout << n << endl;
    }

    reverse(num.begin(), num.end());
    
    for(int &n : num)
    {
        cout << n << endl;
    }

    cout << "==================\n";

    return 0;
}