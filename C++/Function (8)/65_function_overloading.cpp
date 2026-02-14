/*
    Function
    - Function overloading
    --- Number And\Or Type Params Is Different
*/

#include <iostream>
using namespace std;


    void print(int a, int b)
    {
        cout << "Number One Is: " << a << endl;
        cout << "Number Two Is: " << b << endl;    
    }

    void print(int a, int b, int c)
    {
        cout << "Number One Is: " << a << endl;
        cout << "Number Two Is: " << b << endl;    
        cout << "Number Three Is: " << c << endl;
    }

    void print(string a, string b)
    {
        cout << "Text One Is: " << a << endl;
        cout << "Text Two Is: " << b << endl;
    }


int main()
{
    print(10, 20);
    print(10, 20, 30);
    print("Osama", "Elzero");

    return 0;}