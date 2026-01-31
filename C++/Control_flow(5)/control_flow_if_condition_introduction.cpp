/* Control Flow
- If Condition Indroduction

Syntax 
if (Condition)
{
    
}
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    cout << "Welcome" << endl;

    if (age < 18)           // False 
    {
        cout << "Beware" << endl;
    }

    cout << "See You" ;

    system("pause");
    return 0;
}