/*
    Function
    - Built -In Function
    --- cctype Function
    ------- tolower()
    ------- toupper()
    ------- isupper()
    ------- islower()
    ------- isspace()

    - Create 2 Applications
    --- Swap Case App
    --- Remove Space App
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
//     cout << 'A' << endl;                            // A
//     cout << tolower('A') << endl;                   // 97
//     cout << char(tolower('a')) << endl;             // a
//     cout << char(97) << endl;                       // a

//     cout << 'b' << endl;                            // b
//     cout << toupper('b') << endl;                   // 66
//     cout << char(toupper('b')) << endl;             // B
//     cout << char(66) << endl;                       // B
//     cout << "=========================\n";

    string nameone = "ElZEro";                     // elzeRO
    
    int nameoneSize = nameone.size();
    
    for (int i = 0; i < nameoneSize; i++)
    {
        if(isupper(nameone[i]))
        {
            cout << char(tolower(nameone[i]));
        }
        else if (islower(nameone[i]))
        {
            cout << char(toupper(nameone[i]));
        }
        else 
        {
            cout << nameone[i];
        }
    }
    
    string nametwo = "E\n Le \n r\to";
    int nametwoSize = size(nametwo);
    
    for (int i = 0; i < nametwoSize; i++)
    {
        // if (nametwo[i] == ' ')
        // {
        //      continue;
        // }
        if (isspace(nametwo[i]))
        {
            continue;
        }
        cout << nametwo[i];
    }
    
return 0;
}