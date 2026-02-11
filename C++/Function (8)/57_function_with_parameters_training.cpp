/*
    Function
    - Paramter & Arguments Training
    --- Create Ice Box
    --- Simple Calculator
*/

#include <iostream>
using namespace std;


void iceBox(string item)
{
    if(item == "coca cola")
    {
        cout << item << " Will Be More Cold \n";
    }
    else if (item == "Apple" || item == "Juice")
    {
        cout << item << " Will Be More Fresh\n";
    }
    else 
    {
        cout << item << " In Invalid\n";
    }
}


    void calc(int numOne , int numTwo)
    {

        cout << numOne  << " + " << numTwo << " = "  << numOne + numTwo ;
    }


    int main()
    {
        iceBox("coca cola");
        iceBox("Apple");
        iceBox("Juice");
        iceBox("TV Remote");
        calc(10,90);

        return 0;
    }