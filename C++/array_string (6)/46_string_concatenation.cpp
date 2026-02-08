/*  
    String
    - Concatenation Strings
    --- Normal Way
    --- Strcat => Include string.h
    --- With +
    --- append
*/


#include <string.h>
#include <iostream>
using namespace std;

int main()
{

    char fname[] = "Osama ";
    char lname[] = "Elzero";

    cout << fname << lname << endl;
    cout << strcat(fname, lname) << endl;

    string firstname = "Osama ";
    string lastname = "Elzero";

    cout << firstname + lastname << endl;
    cout << firstname.append(lastname) << endl;


    return 0;
}