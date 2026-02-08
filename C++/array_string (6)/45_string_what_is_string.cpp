/*   
    String
    - What Is String ?
    - String Types
    --- C Style String Using
    --- String Class Using Standard Libray
    - Test Type Size
    - Null Terminated Srting
    - \0 => Null

    - Remember
    --- Strint Is Array Of Characters
*/

#include <string>
#include <iostream>
using namespace std;

int main()
{


    cout << "Iam Dragon\n";             // 12 Remember
    cout << "Iam \0 Dragon\n";          // Iam
    
    char name_a[] = "Elzero";
    cout << name_a << endl;             // Elzero
    cout << sizeof(name_a) << endl;     // 7
    cout << name_a[0] << endl;          // E
    cout << name_a[5] << endl;          // o

    cout << int(name_a[6]) << endl;     // \0 => ASCII Value => 0
    cout << int('\b') << endl;          // \b => ASCII Value => 8

    char name_b[] = {'E', 'l', 'z', 'e', 'r', 'o', '\0'};
    cout << name_b << endl;             // Elzero\0
    cout << sizeof(name_b) << endl;     // 7
    cout << name_b[0] << endl;          // E
    cout << name_b[5] << endl;          // o

    string name_c = "Elzero";
    cout << name_c ;                    // Elzero
    cout << sizeof(name_c);             // 32
    cout << name_c[0];                  // E
    cout << name_c[5];                  // o

    return 0;
}