/*
    primitive Data Types
    - Char => Character
    --- Added Inside Single Quotes => Test With Auto
    --- Ascll value
    --- Ascll => American Standard Code for Information Interchange
    --- A Way of Representing Characters As Numbers
    
    --- Search For Type Casting
    --- Create App To Convert Ascll To Character
    --- Create App To Convert Character To Ascll
*/

#include <iostream>
using namespace std;

int main()
{
    char a = 'A';
    cout << sizeof(a) << "\n";      // 1

    auto b = 'B';
    cout << sizeof(b) << "\n";      // 1

    auto c = "c";
    cout << sizeof(c) << "\n";      // 8

    char d = 'Z';
    cout << int(d) << "\n";     // Ascll Value => 90

    cout << int('%') << "\n";       // 37
    cout << int('(') << "\n";       // 40
    cout << int(')') << "\n";       // 41

    // cout << int("Z") << "\n";        // Error



    cout << char(81) << "\n";       // Q

    return 0;
}


// Type Casting Program
int main()
{
    int ascii_code;
    cout << "ُEnter ASCII Code: " << "\n";       
    cin >> ascii_code ;

    cout << char(ascii_code) << "\n";

    return 0;
}


// Character To Ascll
int main()
{
   int Character;
   cout << "Enter Character Code: ";
   cin >> Character;

   cout << char(Character) << "\n";

   return 0;
}
