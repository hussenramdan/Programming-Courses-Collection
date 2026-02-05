	/* 
			Operators & Operands
			"Symbols To Operate On Data"
			
			- Assigment Operators
			"For Assigning Operations "
			
			--- = Assign
			--- += Addition
			--- -= Subtraction
			--- *= Multiplication
			--- /= Division
			--- %= Modulo => Remainder After Division
 */

#include <iostream>
using namespace std;

int main()
{

    cout << 4 % 2 << endl;			// 0
    cout << 6 % 2 << endl;			// 0
 	  cout << 8 % 2 << endl;			// 0
    
    int a = 10;
    // a = a + 10;                  // a + 10 = 20
    a += 10;                        // a = a + 10 
    cout << a << endl; 

    int b = 20;
    // b = b - 10;                   // b = 20 - 10 = 10
    b -= 10 ;                       // b = b - 10       
    cout << b << endl;
    
    
    int c = 5;
    // c * 10;                      // 5 * 10 = 50
    c *= 10 ;                       // c = c * 10
    cout << c << endl;

return 0;
} 
