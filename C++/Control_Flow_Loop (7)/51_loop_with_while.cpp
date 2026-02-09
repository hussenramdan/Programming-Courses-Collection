/*
    Loop
    - Loop With While

    Syntax:
    Wjile (Condition Is True)
    {
        Code
    }
*/

#include <iostream>
using namespace std;

int main()
{

//    For (int i = 0; i < 5; i++)
//     {
//         cout << i << endl;
//     }

    int i = 0;
    while (i < 5)
    {
        cout << i << endl;
        i++;
        if(i == 2)
        {
            break;
        }
    }

    return 0;
}