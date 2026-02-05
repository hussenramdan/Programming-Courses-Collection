/*
	Operator & Operands
	"Symbols To Operate On Data"
	
	- Operators Precedence
	"Which One Has Higher Precedence"
	
	Refernce
	--- Operators Preecedence Table
	
	Search
	- Bitwise Operators
	- Spacship Operator
	
	Trainging 
	- Try Operators Yourself Before Berwsing References
	*/
	
	
	#include <iostream>
	using namespace std;
	
	int main()
	{
	
		cout << 10 + 5 * 5 << endl;
		// 5 * 5 = 25
		// 10 + 25 = 35
		cout << 10 - 5 * 5 << endl;
		// 5 * 5 = 25
		// 10 - 25 = -15
		cout << 20 / 5 * 4 << endl;
		// 20 / 5 = 4
		// 4 * 4 = 16
		cout << 10 + 20 / 5 * 4 << endl;
		// 10 + 
		// 20 / 5 = 4
		// 4 * 4 = 16
		// 10 + 16 = 26
		
		cout << (10 + 5) * 5 << endl;
		// (15) * 5 = 75
	
	return 0;
	}