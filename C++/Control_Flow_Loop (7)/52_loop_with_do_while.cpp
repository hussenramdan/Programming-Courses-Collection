/*
    Loop
    - Loop With Do...While

    Syntax
    do
    {
        code
    } while (condition Is True);
*/

#include <iostream>
using namespace std;

int main()
{

    int index = 4;

    // while (index < 6)
    // {
    //     cout << index << endl;
    //     index++;
    // }


    do
    {
        cout << index << endl;
        index++;
    }while (index < 6);

    return 0;
}