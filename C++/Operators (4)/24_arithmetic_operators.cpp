/*
	Operator & Operands
	"Symbol To Operate On Data" 
	
	- Arithmetic Operators
	"For Mathematical Operation"

		--- + => Addition
		--- - => Subtaction
		 --- * => multiplcation
		--- / => Divison
		--- % => Modulo => Remainder After Division
		
		What Is Operand ?
		- The Prat Of An Insrtction Representing The Data Manipulated By The Operator
		 */

	#include <iostream>
	using namespace std;
	
	int main()
	{
	
		cout << 10 + 10 << endl;                  		 // 20
		cout << sizeof(10 + 10) << endl;          		 // 4 Byte
		
		cout << 10.5f + 9.5f << endl;					// 20	
		cout << sizeof(10.5f + 9.5f) << endl;			// 4 Bytes
      
	
        cout << int(52 + 9.5) << endl;					// 61.5 Because Integer => 61
      
        cout << sizeof(10.5 + 9.5) << endl;				// 8 Double
        cout << sizeof(int (10.5 + 9.5)) << endl;		// 4 Bytes
      
        cout << 100 - 50 << endl;						// 50
        cout << 100 - -50 << endl;						// 150
      
        cout << 10 * 5 << endl; 						// 50
      
        cout << 20 / 5 << endl;							// 20 / 5 = 4
        cout << 12 / 5 << endl;							// 2.4 Because Integer => 2 
        cout << 12.f / 5 << endl;						// 12 / 5 = 2.4
      
        cout << 20 % 5 << endl;							// 0
        cout << 21 % 5 << endl;							// 1
        cout << 24 % 5 << endl;							// 4
        // cout << 24.5 % 5 << endl;					// Problem
      
	return 0 ;
}







