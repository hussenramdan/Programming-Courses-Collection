/*
		Operators & Operands
		"Symbols To Operate On Data"
		
		- Comparison Operators
		"For Comparing Values"
		
		--- == Equal
		--- != Not Equal
		--- > Greater Than
		--- < Less Than
		--- >= Greater Than Or Equal
		--- <= Less Than Or Equal
*/


#include <iostream>
using namespace std;

int main()
{
		cout << (10 == 10) << endl;               // True 1
		cout << (1000 == 100) << endl;            // False 0
		
		cout << (100 != 100) << endl;              // 0
        cout << (1000 != 100) << endl;        // 1       
        
        cout << (40 > 18) << endl;             // 1
		    cout << (18 > 18) << endl;             //  0
        
        cout << (16 < 18) << endl;              // 1
        
        cout << (40 >= 18) << endl;             // 1
        cout << (18 >= 18) << endl;             // 1
        
        cout << (16 <= 18) << endl;             // 1
        cout << (18 <= 18) << endl;             // 1
        
return 0;
}