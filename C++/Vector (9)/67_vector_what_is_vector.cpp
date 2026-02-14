/*  
    Vector
    - What Is Vector ?
    --- Vector Is A Contaoner For Similar Data Like Array
    --- Vectors Are Dynamic Array => Array That Can Change In size
    --- Vector Is a Class Template
    - Vector Syntax => vector<Type> VariableName 
    Vector Create With All Methods
    - Loop On Elements
    - Important Notes

    We will Cover The Comparison With Array Later
*/

#include <iostream>
#include <vector>
using namespace std;


int main()
{


    vector<int> numOne = {10, 20, 30, 40};
    vector<int> numTwo {100, 200, 300, 400};
    vector<int> numThree = {4, 50};

    for (int i = 0; i < numOne.size(); i++)
    {
        cout << numOne.at(i) << " " ;
    }
    cout << "================\n";

    for (int i = 0; i < numTwo.size(); i++)
    {
        cout << numTwo.at(i) << " " ;
    }
    cout << "================\n";

    for (int i = 0; i < numThree.size(); i++)
    {
        cout << numThree.at(i) << " ";
    }
    cout << "================\n";

    cout << "Number Of Elements Is: " << numThree.size() << "\n";

    numThree.push_back(1000);

    cout << "Number Of Elements Is: " << numThree.size() << "\n";

    cout << "================\n";

    for (int i = 0; i < numThree.size(); i++)
    {
        cout << numThree.at(i) << " ";
    }
    cout << "================\n";

    return 0;
}
