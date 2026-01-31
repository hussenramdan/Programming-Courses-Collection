/*
   Data Types
    - What Is Data ?
    - Data Examples In Real Life

    --- Integer => 5000 , 10 , -100

    --- String => "Elzero Web School" , "Osama Elzero" , 100A

    --- Boolean => ture , false

    --- Float => 18.5 , 1900.5

    --- Array => ["Osama","Ahmed","Sayed","Mahmoud"]

    - Why We Choose Data
    --- Size
    --- Operations
    
    

    What Is Operand ?
    The Part Of An Instruction Representing The Data Minpulated by The Operator

*/

#include <iostream>
using namespace std;

int main()
{

    int num = 10;
    string name = "Osama";
    bool status = true;

    int num_one = 100;
    int num_two = 20;

    cout << sizeof(num) << "\n";
    cout << sizeof(name) << "\n";
    cout << sizeof(status) << "\n";

    cout << num_one / num_two;  // 100 / 20 = 5
//  cout << num_two / name;     // Error

    return 0;
}