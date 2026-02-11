/*  
    Function
    - Parameters & Arguments
*/

#include <iostream>
using namespace std;


    void sayHello(string msg, string name, int age)
    {
        cout << msg << " " << name << ",\n";
        cout << name << "/'s Age Is: " << age << endl;
    }

    int main()
    {
        sayHello("Hello", "Osama", 40);
        sayHello("Hi", "Ahmed", 25);
        sayHello("Welcome", "Sayad", 35);

        return 0;
    }