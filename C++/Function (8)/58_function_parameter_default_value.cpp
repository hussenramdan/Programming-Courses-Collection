/*
    Function
    - Parameter Default Value
*/

#include <iostream>
using namespace std;

    void defauls(string msg = "Welcome" ,string name = "Unknown")
    {
        cout << msg << " " << name << endl;
    }

    int main()
    {
        defauls("Hello", "Ahmed");
        defauls("Hi");
        defauls();
        
        return 0;
    }