/*
	Operators & Operands
	"Symboles To Operate On Data"	
	
	- Increment And Decrment Operators
		"For incementing And Decrementing Value "
		
		Pre / Post Increment
		Pre / Post Decrement
	*/
	
	
	#include <iostream>
	using namespace std;
	
	int main()
	{
	
	int likes = 0;
	    cout << likes++ << endl;            // 0
		cout << likes << endl;              // 1
		
	int views = 0;
		cout << ++views << endl;             // 1
		cout << views << endl;               // 1
		
	int like = 0;
		cout << like-- << endl;            // 0
		cout << like << endl;             // -1

	int view = 0;
		cout << --view << endl;            // -1
		cout << view << endl;              // -1	 
	
	return 0;
	}