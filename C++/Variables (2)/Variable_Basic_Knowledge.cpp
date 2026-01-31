/*
    Variables Basic Konwledge
    -- Data Container With Unique Name "Identifier"
    -- Declare With Value + Change Later

    Syntax  
     - [Data_Type] [Varible_Name] = [Value]
*/

#include <iostream>
using namespace std;

int main()
{
    int price = 200;
    cout << "Price Is: " << price;
    cout << "\nPrice After Adding 15 Is: " << price + 15;
    cout << "\nPrice After Adding 50 IS: " << price + 50;
    price = 150;
    cout << "\nThe New Price Is: " << price ;

    return 0;
}